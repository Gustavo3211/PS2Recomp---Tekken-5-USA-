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

// Function: sub_00247C80
// Address: 0x247c80 - 0x247d28
void sub_00247C80_0x247c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247C80_0x247c80");
#endif

    switch (ctx->pc) {
        case 0x247cd4u: goto label_247cd4;
        case 0x247cdcu: goto label_247cdc;
        case 0x247cecu: goto label_247cec;
        case 0x247d0cu: goto label_247d0c;
        default: break;
    }

    ctx->pc = 0x247c80u;

    // 0x247c80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x247c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x247c84: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x247c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x247c88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x247c88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247c8c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x247c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x247c90: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x247c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x247c94: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x247c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x247c98: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x247c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x247c9c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x247C9Cu;
    {
        const bool branch_taken_0x247c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247C9Cu;
        // 0x247ca0: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c9c) {
            ctx->pc = 0x247D0Cu;
            goto label_247d0c;
        }
    }
    ctx->pc = 0x247CA4u;
    // 0x247ca4: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x247ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247ca8: 0x8e500074  lw          $s0, 0x74($s2)
    ctx->pc = 0x247ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x247cac: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x247cacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x247cb0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x247cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x247cb4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x247cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247cb8: 0x24c66fe0  addiu       $a2, $a2, 0x6FE0
    ctx->pc = 0x247cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28640));
    // 0x247cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247cc0: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x247cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247cc4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x247cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x247cc8: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x247cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247ccc: 0xc0cba88  jal         func_32EA20
    ctx->pc = 0x247CCCu;
    SET_GPR_U32(ctx, 31, 0x247CD4u);
    ctx->pc = 0x247CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CCCu;
    // 0x247cd0: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA20u, 0x247CCCu, 0x247CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CD4u;
label_247cd4:
    // 0x247cd4: 0xc0cbb5e  jal         func_32ED78
    ctx->pc = 0x247CD4u;
    SET_GPR_U32(ctx, 31, 0x247CDCu);
    ctx->pc = 0x247CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CD4u;
    // 0x247cd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32ED78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32ED78u, 0x247CD4u, 0x247CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CDCu;
label_247cdc:
    // 0x247cdc: 0xc60d0018  lwc1        $f13, 0x18($s0)
    ctx->pc = 0x247cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x247ce0: 0xc60e001c  lwc1        $f14, 0x1C($s0)
    ctx->pc = 0x247ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x247ce4: 0xc091e4c  jal         func_247930
    ctx->pc = 0x247CE4u;
    SET_GPR_U32(ctx, 31, 0x247CECu);
    ctx->pc = 0x247CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247CE4u;
    // 0x247ce8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x247930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247930u, 0x247CE4u, 0x247CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247CECu;
label_247cec:
    // 0x247cec: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x247cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247cf0: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x247cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x247cf4: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x247cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x247cf8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x247cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x247cfc: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x247cfcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x247d00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x247d00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x247d04: 0xc092912  jal         func_24A448
    ctx->pc = 0x247D04u;
    SET_GPR_U32(ctx, 31, 0x247D0Cu);
    ctx->pc = 0x247D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D04u;
    // 0x247d08: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A448u, 0x247D04u, 0x247D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247D0Cu;
label_247d0c:
    // 0x247d0c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x247d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247d10: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x247d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247d14: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x247d14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247d18: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x247d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x247d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x247D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D1Cu;
        // 0x247d20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247D24u;
    // 0x247d24: 0x0  nop
    ctx->pc = 0x247d24u;
    // NOP
    ctx->pc = 0x247d28u;
}
