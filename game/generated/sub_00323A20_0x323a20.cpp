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

// Function: sub_00323A20
// Address: 0x323a20 - 0x323ab8
void sub_00323A20_0x323a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323A20_0x323a20");
#endif

    switch (ctx->pc) {
        case 0x323a20u: goto label_323a20;
        case 0x323a24u: goto label_323a24;
        case 0x323a28u: goto label_323a28;
        case 0x323a2cu: goto label_323a2c;
        case 0x323a30u: goto label_323a30;
        case 0x323a34u: goto label_323a34;
        case 0x323a38u: goto label_323a38;
        case 0x323a3cu: goto label_323a3c;
        case 0x323a40u: goto label_323a40;
        case 0x323a44u: goto label_323a44;
        case 0x323a48u: goto label_323a48;
        case 0x323a4cu: goto label_323a4c;
        case 0x323a50u: goto label_323a50;
        case 0x323a54u: goto label_323a54;
        case 0x323a58u: goto label_323a58;
        case 0x323a5cu: goto label_323a5c;
        case 0x323a60u: goto label_323a60;
        case 0x323a64u: goto label_323a64;
        case 0x323a68u: goto label_323a68;
        case 0x323a6cu: goto label_323a6c;
        case 0x323a70u: goto label_323a70;
        case 0x323a74u: goto label_323a74;
        case 0x323a78u: goto label_323a78;
        case 0x323a7cu: goto label_323a7c;
        case 0x323a80u: goto label_323a80;
        case 0x323a84u: goto label_323a84;
        case 0x323a88u: goto label_323a88;
        case 0x323a8cu: goto label_323a8c;
        case 0x323a90u: goto label_323a90;
        case 0x323a94u: goto label_323a94;
        case 0x323a98u: goto label_323a98;
        case 0x323a9cu: goto label_323a9c;
        case 0x323aa0u: goto label_323aa0;
        case 0x323aa4u: goto label_323aa4;
        case 0x323aa8u: goto label_323aa8;
        case 0x323aacu: goto label_323aac;
        case 0x323ab0u: goto label_323ab0;
        case 0x323ab4u: goto label_323ab4;
        default: break;
    }

    ctx->pc = 0x323a20u;

label_323a20:
    // 0x323a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x323a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_323a24:
    // 0x323a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x323a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_323a28:
    // 0x323a28: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x323a28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_323a2c:
    // 0x323a2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x323a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_323a30:
    // 0x323a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_323a34:
    // 0x323a34: 0x261008c0  addiu       $s0, $s0, 0x8C0
    ctx->pc = 0x323a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2240));
label_323a38:
    // 0x323a38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x323a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_323a3c:
    // 0x323a3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323a40:
    // 0x323a40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x323a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_323a44:
    // 0x323a44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x323a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_323a48:
    // 0x323a48: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x323a48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_323a4c:
    // 0x323a4c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x323a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_323a50:
    // 0x323a50: 0xc0cb224  jal         func_32C890
label_323a54:
    if (ctx->pc == 0x323A54u) {
        ctx->pc = 0x323A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A50u;
        // 0x323a54: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A58u;
        goto label_323a58;
    }
    ctx->pc = 0x323A50u;
    SET_GPR_U32(ctx, 31, 0x323A58u);
    ctx->pc = 0x323A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A50u;
    // 0x323a54: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x323A50u, 0x323A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A58u;
label_323a58:
    // 0x323a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323a5c:
    // 0x323a5c: 0xc0cb224  jal         func_32C890
label_323a60:
    if (ctx->pc == 0x323A60u) {
        ctx->pc = 0x323A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A5Cu;
        // 0x323a60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A64u;
        goto label_323a64;
    }
    ctx->pc = 0x323A5Cu;
    SET_GPR_U32(ctx, 31, 0x323A64u);
    ctx->pc = 0x323A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A5Cu;
    // 0x323a60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x323A5Cu, 0x323A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A64u;
label_323a64:
    // 0x323a64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x323a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_323a68:
    // 0x323a68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323a6c:
    // 0x323a6c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x323a6cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_323a70:
    // 0x323a70: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_323a74:
    if (ctx->pc == 0x323A74u) {
        ctx->pc = 0x323A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A70u;
        // 0x323a74: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A78u;
        goto label_323a78;
    }
    ctx->pc = 0x323A70u;
    {
        const bool branch_taken_0x323a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x323A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A70u;
        // 0x323a74: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323a70) {
            ctx->pc = 0x323A9Cu;
            goto label_323a9c;
        }
    }
    ctx->pc = 0x323A78u;
label_323a78:
    // 0x323a78: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x323a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_323a7c:
    // 0x323a7c: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x323a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_323a80:
    // 0x323a80: 0x304200c0  andi        $v0, $v0, 0xC0
    ctx->pc = 0x323a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)192);
label_323a84:
    // 0x323a84: 0x50460001  beql        $v0, $a2, . + 4 + (0x1 << 2)
label_323a88:
    if (ctx->pc == 0x323A88u) {
        ctx->pc = 0x323A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A84u;
        // 0x323a88: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A8Cu;
        goto label_323a8c;
    }
    ctx->pc = 0x323A84u;
    {
        const bool branch_taken_0x323a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x323a84) {
            ctx->pc = 0x323A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323A84u;
            // 0x323a88: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323A8Cu;
            goto label_323a8c;
        }
    }
    ctx->pc = 0x323A8Cu;
label_323a8c:
    // 0x323a8c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x323a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_323a90:
    // 0x323a90: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x323a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_323a94:
    // 0x323a94: 0x40f809  jalr        $v0
label_323a98:
    if (ctx->pc == 0x323A98u) {
        ctx->pc = 0x323A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A94u;
        // 0x323a98: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323A9Cu;
        goto label_323a9c;
    }
    ctx->pc = 0x323A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x323A9Cu);
        ctx->pc = 0x323A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A94u;
        // 0x323a98: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323A94u, 0x323A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323A9Cu;
label_323a9c:
    // 0x323a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x323a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_323aa0:
    // 0x323aa0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x323aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_323aa4:
    // 0x323aa4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x323aa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_323aa8:
    // 0x323aa8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x323aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_323aac:
    // 0x323aac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x323aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_323ab0:
    // 0x323ab0: 0x3e00008  jr          $ra
label_323ab4:
    if (ctx->pc == 0x323AB4u) {
        ctx->pc = 0x323AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AB0u;
        // 0x323ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323AB8u;
        goto label_fallthrough_0x323ab0;
    }
    ctx->pc = 0x323AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AB0u;
        // 0x323ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x323ab0:
    ctx->pc = 0x323AB8u;
}
