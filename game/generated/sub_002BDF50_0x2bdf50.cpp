#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BDF50
// Address: 0x2bdf50 - 0x2bdfd8
void sub_002BDF50_0x2bdf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDF50_0x2bdf50");
#endif

    switch (ctx->pc) {
        case 0x2bdf74u: goto label_2bdf74;
        case 0x2bdf84u: goto label_2bdf84;
        case 0x2bdfa8u: goto label_2bdfa8;
        default: break;
    }

    ctx->pc = 0x2bdf50u;

    // 0x2bdf50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2bdf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2bdf54: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2bdf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2bdf58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bdf58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf5c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2bdf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2bdf60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2bdf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf64: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2bdf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2bdf68: 0x8e220894  lw          $v0, 0x894($s1)
    ctx->pc = 0x2bdf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x2bdf6c: 0xc08c1b0  jal         func_2306C0
    ctx->pc = 0x2BDF6Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF74u);
    ctx->pc = 0x2BDF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF6Cu;
    // 0x2bdf70: 0x8c50001c  lw          $s0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306C0u, 0x2BDF6Cu, 0x2BDF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF74u;
label_2bdf74:
    // 0x2bdf74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bdf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bdf78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bdf7c: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x2BDF7Cu;
    SET_GPR_U32(ctx, 31, 0x2BDF84u);
    ctx->pc = 0x2BDF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDF7Cu;
    // 0x2bdf80: 0x26060790  addiu       $a2, $s0, 0x790 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x2BDF7Cu, 0x2BDF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDF84u;
label_2bdf84:
    // 0x2bdf84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bdf84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bdf88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bdf88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bdf8c: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x2bdf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bdf90: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2bdf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bdf94: 0x0  nop
    ctx->pc = 0x2bdf94u;
    // NOP
    // 0x2bdf98: 0x0  nop
    ctx->pc = 0x2bdf98u;
    // NOP
    // 0x2bdf9c: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2bdf9cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x2bdfa0: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BDFA0u;
    SET_GPR_U32(ctx, 31, 0x2BDFA8u);
    ctx->pc = 0x2BDFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BDFA0u;
    // 0x2bdfa4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BDFA0u, 0x2BDFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDFA8u;
label_2bdfa8:
    // 0x2bdfa8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2bdfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bdfac: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2bdfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bdfb0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bdfb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2bdfb4: 0xe62206b8  swc1        $f2, 0x6B8($s1)
    ctx->pc = 0x2bdfb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1720), bits); }
    // 0x2bdfb8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2bdfb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bdfbc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bdfbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2bdfc0: 0xe62006bc  swc1        $f0, 0x6BC($s1)
    ctx->pc = 0x2bdfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1724), bits); }
    // 0x2bdfc4: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2bdfc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2bdfc8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2bdfc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bdfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFCCu;
        // 0x2bdfd0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDFD4u;
    // 0x2bdfd4: 0x0  nop
    ctx->pc = 0x2bdfd4u;
    // NOP
    ctx->pc = 0x2bdfd8u;
}
