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

// Function: sub_00100BC8
// Address: 0x100bc8 - 0x100c80
void sub_00100BC8_0x100bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100BC8_0x100bc8");
#endif

    switch (ctx->pc) {
        case 0x100bfcu: goto label_100bfc;
        case 0x100c08u: goto label_100c08;
        case 0x100c18u: goto label_100c18;
        case 0x100c28u: goto label_100c28;
        case 0x100c40u: goto label_100c40;
        case 0x100c50u: goto label_100c50;
        case 0x100c58u: goto label_100c58;
        case 0x100c60u: goto label_100c60;
        default: break;
    }

    ctx->pc = 0x100bc8u;

    // 0x100bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100bd0: 0x3c1000e4  lui         $s0, 0xE4
    ctx->pc = 0x100bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)228 << 16));
    // 0x100bd4: 0x2610af00  addiu       $s0, $s0, -0x5100
    ctx->pc = 0x100bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946560));
    // 0x100bd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x100bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x100bdc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x100bdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100be4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x100be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x100be8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x100be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100bec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x100becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x100bf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x100bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x100bf4: 0xc0405a8  jal         func_1016A0
    ctx->pc = 0x100BF4u;
    SET_GPR_U32(ctx, 31, 0x100BFCu);
    ctx->pc = 0x100BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BF4u;
    // 0x100bf8: 0x3c12001e  lui         $s2, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)30 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1016A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1016A0u, 0x100BF4u, 0x100BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BFCu;
label_100bfc:
    // 0x100bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c00: 0xc0401da  jal         func_100768
    ctx->pc = 0x100C00u;
    SET_GPR_U32(ctx, 31, 0x100C08u);
    ctx->pc = 0x100C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C00u;
    // 0x100c04: 0x3652b540  ori         $s2, $s2, 0xB540 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)46400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x100768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100768u, 0x100C00u, 0x100C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C08u;
label_100c08:
    // 0x100c08: 0x3c020081  lui         $v0, 0x81
    ctx->pc = 0x100c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)129 << 16));
    // 0x100c0c: 0x24508b40  addiu       $s0, $v0, -0x74C0
    ctx->pc = 0x100c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937408));
    // 0x100c10: 0x2321018  mult        $v0, $s1, $s2
    ctx->pc = 0x100c10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x100c14: 0x0  nop
    ctx->pc = 0x100c14u;
    // NOP
label_100c18:
    // 0x100c18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x100c1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x100c20: 0xc0405c2  jal         func_101708
    ctx->pc = 0x100C20u;
    SET_GPR_U32(ctx, 31, 0x100C28u);
    ctx->pc = 0x100C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C20u;
    // 0x100c24: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101708u, 0x100C20u, 0x100C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C28u;
label_100c28:
    // 0x100c28: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x100c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x100c2c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x100C2Cu;
    {
        const bool branch_taken_0x100c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100c2c) {
            ctx->pc = 0x100C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100C2Cu;
            // 0x100c30: 0x2321018  mult        $v0, $s1, $s2 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x100C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100c18;
        }
    }
    ctx->pc = 0x100C34u;
    // 0x100c34: 0x3c04013a  lui         $a0, 0x13A
    ctx->pc = 0x100c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)314 << 16));
    // 0x100c38: 0xc0405ea  jal         func_1017A8
    ctx->pc = 0x100C38u;
    SET_GPR_U32(ctx, 31, 0x100C40u);
    ctx->pc = 0x100C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C38u;
    // 0x100c3c: 0x2484bdc0  addiu       $a0, $a0, -0x4240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017A8u, 0x100C38u, 0x100C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C40u;
label_100c40:
    // 0x100c40: 0x52600008  beql        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x100C40u;
    {
        const bool branch_taken_0x100c40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x100c40) {
            ctx->pc = 0x100C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100C40u;
            // 0x100c44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x100C64u;
            goto label_100c64;
        }
    }
    ctx->pc = 0x100C48u;
    // 0x100c48: 0xc08928a  jal         func_224A28
    ctx->pc = 0x100C48u;
    SET_GPR_U32(ctx, 31, 0x100C50u);
    ctx->pc = 0x224A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224A28u, 0x100C48u, 0x100C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C50u;
label_100c50:
    // 0x100c50: 0xc0892ac  jal         func_224AB0
    ctx->pc = 0x100C50u;
    SET_GPR_U32(ctx, 31, 0x100C58u);
    ctx->pc = 0x224AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224AB0u, 0x100C50u, 0x100C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C58u;
label_100c58:
    // 0x100c58: 0xc09d9ca  jal         func_276728
    ctx->pc = 0x100C58u;
    SET_GPR_U32(ctx, 31, 0x100C60u);
    ctx->pc = 0x276728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276728u, 0x100C58u, 0x100C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C60u;
label_100c60:
    // 0x100c60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_100c64:
    // 0x100c64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x100c64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100c68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x100c68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100c6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x100c6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x100c70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x100c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100c74: 0x3e00008  jr          $ra
    ctx->pc = 0x100C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C74u;
        // 0x100c78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100C7Cu;
    // 0x100c7c: 0x0  nop
    ctx->pc = 0x100c7cu;
    // NOP
    ctx->pc = 0x100c80u;
}
