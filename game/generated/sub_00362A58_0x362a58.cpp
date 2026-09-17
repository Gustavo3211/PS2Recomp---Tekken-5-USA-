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

// Function: sub_00362A58
// Address: 0x362a58 - 0x362ae8
void sub_00362A58_0x362a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362A58_0x362a58");
#endif

    switch (ctx->pc) {
        case 0x362a68u: goto label_362a68;
        case 0x362a90u: goto label_362a90;
        case 0x362aa0u: goto label_362aa0;
        case 0x362abcu: goto label_362abc;
        case 0x362accu: goto label_362acc;
        default: break;
    }

    ctx->pc = 0x362a58u;

    // 0x362a58: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x362a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x362a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x362A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A5Cu;
        // 0x362a60: 0xa4445cf0  sh          $a0, 0x5CF0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 23792), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362A64u;
    // 0x362a64: 0x0  nop
    ctx->pc = 0x362a64u;
    // NOP
label_362a68:
    // 0x362a68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x362a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x362a6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x362a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x362a70: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x362a70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x362a74: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x362a74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x362a78: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x362a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x362a7c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x362a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x362a80: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x362A80u;
    {
        const bool branch_taken_0x362a80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x362A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362A80u;
        // 0x362a84: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362a80) {
            ctx->pc = 0x362AB0u;
            goto label_362ab0;
        }
    }
    ctx->pc = 0x362A88u;
    // 0x362a88: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x362A88u;
    SET_GPR_U32(ctx, 31, 0x362A90u);
    ctx->pc = 0x362A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362A88u;
    // 0x362a8c: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x362A88u, 0x362A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362A90u;
label_362a90:
    // 0x362a90: 0x261075a8  addiu       $s0, $s0, 0x75A8
    ctx->pc = 0x362a90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30120));
    // 0x362a94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x362a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a98: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362A98u;
    SET_GPR_U32(ctx, 31, 0x362AA0u);
    ctx->pc = 0x362A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362A98u;
    // 0x362a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362A98u, 0x362AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362AA0u;
label_362aa0:
    // 0x362aa0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362aa4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x362AA4u;
    {
        const bool branch_taken_0x362aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362AA4u;
        // 0x362aa8: 0x34420030  ori         $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362aa4) {
            ctx->pc = 0x362AD0u;
            goto label_362ad0;
        }
    }
    ctx->pc = 0x362AACu;
    // 0x362aac: 0x0  nop
    ctx->pc = 0x362aacu;
    // NOP
label_362ab0:
    // 0x362ab0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x362ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ab4: 0xc0d6062  jal         func_358188
    ctx->pc = 0x362AB4u;
    SET_GPR_U32(ctx, 31, 0x362ABCu);
    ctx->pc = 0x362AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362AB4u;
    // 0x362ab8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358188u, 0x362AB4u, 0x362ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362ABCu;
label_362abc:
    // 0x362abc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x362abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362ac0: 0x87a50004  lh          $a1, 0x4($sp)
    ctx->pc = 0x362ac0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x362ac4: 0xc0d5fd2  jal         func_357F48
    ctx->pc = 0x362AC4u;
    SET_GPR_U32(ctx, 31, 0x362ACCu);
    ctx->pc = 0x362AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362AC4u;
    // 0x362ac8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x357F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357F48u, 0x362AC4u, 0x362ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362ACCu;
label_362acc:
    // 0x362acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_362ad0:
    // 0x362ad0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x362ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362ad4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x362ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x362ad8: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x362ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x362adc: 0x3e00008  jr          $ra
    ctx->pc = 0x362ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362ADCu;
        // 0x362ae0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362AE4u;
    // 0x362ae4: 0x0  nop
    ctx->pc = 0x362ae4u;
    // NOP
    ctx->pc = 0x362ae8u;
}
