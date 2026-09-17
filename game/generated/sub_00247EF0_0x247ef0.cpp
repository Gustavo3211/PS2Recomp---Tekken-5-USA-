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

// Function: sub_00247EF0
// Address: 0x247ef0 - 0x247f78
void sub_00247EF0_0x247ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247EF0_0x247ef0");
#endif

    switch (ctx->pc) {
        case 0x247f34u: goto label_247f34;
        case 0x247f60u: goto label_247f60;
        default: break;
    }

    ctx->pc = 0x247ef0u;

    // 0x247ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x247ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x247ef4: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x247ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x247ef8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x247ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x247efc: 0x24516fe0  addiu       $s1, $v0, 0x6FE0
    ctx->pc = 0x247efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 28640));
    // 0x247f00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x247f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x247f04: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x247f04u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x166FFCu));
    // 0x247f08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x247f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x247f0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x247f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247f10: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x247F10u;
    {
        const bool branch_taken_0x247f10 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x247F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F10u;
        // 0x247f14: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f10) {
            ctx->pc = 0x247F48u;
            goto label_247f48;
        }
    }
    ctx->pc = 0x247F18u;
    // 0x247f18: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x247f18u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247f1c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x247f1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x247f20: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x247f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x247f24: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x247f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x247f28: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x247f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x247f2c: 0xc091e4c  jal         func_247930
    ctx->pc = 0x247F2Cu;
    SET_GPR_U32(ctx, 31, 0x247F34u);
    ctx->pc = 0x247930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247930u, 0x247F2Cu, 0x247F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F34u;
label_247f34:
    // 0x247f34: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x247f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x247f38: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x247f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x247f3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x247F3Cu;
    {
        const bool branch_taken_0x247f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F3Cu;
        // 0x247f40: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f3c) {
            ctx->pc = 0x247F50u;
            goto label_247f50;
        }
    }
    ctx->pc = 0x247F44u;
    // 0x247f44: 0x0  nop
    ctx->pc = 0x247f44u;
    // NOP
label_247f48:
    // 0x247f48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x247f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_247f50:
    // 0x247f50: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x247f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x247f54: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x247f54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x247f58: 0xc092912  jal         func_24A448
    ctx->pc = 0x247F58u;
    SET_GPR_U32(ctx, 31, 0x247F60u);
    ctx->pc = 0x247F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247F58u;
    // 0x247f5c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A448u, 0x247F58u, 0x247F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F60u;
label_247f60:
    // 0x247f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x247f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247f64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x247f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x247f68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x247f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247f6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x247f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x247f70: 0x3e00008  jr          $ra
    ctx->pc = 0x247F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F70u;
        // 0x247f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247F78u;
}
