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

// Function: sub_00232ED0
// Address: 0x232ed0 - 0x232f78
void sub_00232ED0_0x232ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232ED0_0x232ed0");
#endif

    switch (ctx->pc) {
        case 0x232eecu: goto label_232eec;
        case 0x232f04u: goto label_232f04;
        case 0x232f18u: goto label_232f18;
        case 0x232f28u: goto label_232f28;
        case 0x232f38u: goto label_232f38;
        default: break;
    }

    ctx->pc = 0x232ed0u;

    // 0x232ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232ed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x232ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232ed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232edc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x232edcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x232ee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x232ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x232ee4: 0xc08cb60  jal         func_232D80
    ctx->pc = 0x232EE4u;
    SET_GPR_U32(ctx, 31, 0x232EECu);
    ctx->pc = 0x232EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232EE4u;
    // 0x232ee8: 0xe7b50018  swc1        $f21, 0x18($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x232D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232D80u, 0x232EE4u, 0x232EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232EECu;
label_232eec:
    // 0x232eec: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x232eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x232ef0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x232ef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x232ef4: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x232EF4u;
    {
        const bool branch_taken_0x232ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EF4u;
        // 0x232ef8: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ef4) {
            ctx->pc = 0x232F60u;
            goto label_232f60;
        }
    }
    ctx->pc = 0x232EFCu;
    // 0x232efc: 0xc08b8a2  jal         func_22E288
    ctx->pc = 0x232EFCu;
    SET_GPR_U32(ctx, 31, 0x232F04u);
    ctx->pc = 0x22E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E288u, 0x232EFCu, 0x232F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F04u;
label_232f04:
    // 0x232f04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x232f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232f08: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x232F08u;
    {
        const bool branch_taken_0x232f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F08u;
        // 0x232f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f08) {
            ctx->pc = 0x232F58u;
            goto label_232f58;
        }
    }
    ctx->pc = 0x232F10u;
    // 0x232f10: 0xc08b634  jal         func_22D8D0
    ctx->pc = 0x232F10u;
    SET_GPR_U32(ctx, 31, 0x232F18u);
    ctx->pc = 0x22D8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D8D0u, 0x232F10u, 0x232F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F18u;
label_232f18:
    // 0x232f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x232f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232f20: 0xc08b672  jal         func_22D9C8
    ctx->pc = 0x232F20u;
    SET_GPR_U32(ctx, 31, 0x232F28u);
    ctx->pc = 0x232F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F20u;
    // 0x232f24: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D9C8u, 0x232F20u, 0x232F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F28u;
label_232f28:
    // 0x232f28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f2c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x232f2cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x232f30: 0xc08b672  jal         func_22D9C8
    ctx->pc = 0x232F30u;
    SET_GPR_U32(ctx, 31, 0x232F38u);
    ctx->pc = 0x232F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F30u;
    // 0x232f34: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D9C8u, 0x232F30u, 0x232F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F38u;
label_232f38:
    // 0x232f38: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x232f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232f3c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x232F3Cu;
    {
        const bool branch_taken_0x232f3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x232f3c) {
            ctx->pc = 0x232F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232F3Cu;
            // 0x232f40: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232F44u;
            goto label_232f44;
        }
    }
    ctx->pc = 0x232F44u;
label_232f44:
    // 0x232f44: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x232f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x232f48: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x232F48u;
    {
        const bool branch_taken_0x232f48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x232f48) {
            ctx->pc = 0x232F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232F48u;
            // 0x232f4c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x232F5Cu;
            goto label_232f5c;
        }
    }
    ctx->pc = 0x232F50u;
    // 0x232f50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x232F50u;
    {
        const bool branch_taken_0x232f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F50u;
        // 0x232f54: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f50) {
            ctx->pc = 0x232F60u;
            goto label_232f60;
        }
    }
    ctx->pc = 0x232F58u;
label_232f58:
    // 0x232f58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x232f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_232f5c:
    // 0x232f5c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x232f5cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_232f60:
    // 0x232f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232f64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232f68: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x232f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x232f6c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x232f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x232f70: 0x3e00008  jr          $ra
    ctx->pc = 0x232F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F70u;
        // 0x232f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232F78u;
}
