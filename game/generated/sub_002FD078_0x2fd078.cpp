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

// Function: sub_002FD078
// Address: 0x2fd078 - 0x2fd188
void sub_002FD078_0x2fd078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD078_0x2fd078");
#endif

    switch (ctx->pc) {
        case 0x2fd0b0u: goto label_2fd0b0;
        case 0x2fd0b4u: goto label_2fd0b4;
        case 0x2fd0e8u: goto label_2fd0e8;
        case 0x2fd148u: goto label_2fd148;
        case 0x2fd14cu: goto label_2fd14c;
        default: break;
    }

    ctx->pc = 0x2fd078u;

    // 0x2fd078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fd07c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fd07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fd080: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fd080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fd084: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2fd084u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fd088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fd08c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fd08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fd090: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fd090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fd094: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FD094u;
    {
        const bool branch_taken_0x2fd094 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD094u;
        // 0x2fd098: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd094) {
            ctx->pc = 0x2FD0FCu;
            goto label_2fd0fc;
        }
    }
    ctx->pc = 0x2FD09Cu;
    // 0x2fd09c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2fd09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2fd0a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fd0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd0a4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2fd0a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd0a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FD0A8u;
    {
        const bool branch_taken_0x2fd0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD0A8u;
        // 0x2fd0ac: 0x24500004  addiu       $s0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd0a8) {
            ctx->pc = 0x2FD0D0u;
            goto label_2fd0d0;
        }
    }
    ctx->pc = 0x2FD0B0u;
label_2fd0b0:
    // 0x2fd0b0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2fd0b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2fd0b4:
    // 0x2fd0b4: 0x0  nop
    ctx->pc = 0x2fd0b4u;
    // NOP
    // 0x2fd0b8: 0x0  nop
    ctx->pc = 0x2fd0b8u;
    // NOP
    // 0x2fd0bc: 0x0  nop
    ctx->pc = 0x2fd0bcu;
    // NOP
    // 0x2fd0c0: 0x0  nop
    ctx->pc = 0x2fd0c0u;
    // NOP
    // 0x2fd0c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FD0C4u;
    {
        const bool branch_taken_0x2fd0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD0C4u;
        // 0x2fd0c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd0c4) {
            ctx->pc = 0x2FD0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd0b0;
        }
    }
    ctx->pc = 0x2FD0CCu;
    // 0x2fd0cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2fd0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2fd0d0:
    // 0x2fd0d0: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2fd0d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2fd0d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FD0D4u;
    {
        const bool branch_taken_0x2fd0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD0D4u;
        // 0x2fd0d8: 0x2321826  xor         $v1, $s1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd0d4) {
            ctx->pc = 0x2FD0F4u;
            goto label_2fd0f4;
        }
    }
    ctx->pc = 0x2FD0DCu;
    // 0x2fd0dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fd0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd0e0: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x2FD0E0u;
    SET_GPR_U32(ctx, 31, 0x2FD0E8u);
    ctx->pc = 0x2FD0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD0E0u;
    // 0x2fd0e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x2FD0E0u, 0x2FD0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD0E8u;
label_2fd0e8:
    // 0x2fd0e8: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2FD0E8u;
    {
        const bool branch_taken_0x2fd0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd0e8) {
            ctx->pc = 0x2FD0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD0E8u;
            // 0x2fd0ec: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD0B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd0b4;
        }
    }
    ctx->pc = 0x2FD0F0u;
    // 0x2fd0f0: 0x2321826  xor         $v1, $s1, $s2
    ctx->pc = 0x2fd0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 18));
label_2fd0f4:
    // 0x2fd0f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fd0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fd0f8: 0x223100b  movn        $v0, $s1, $v1
    ctx->pc = 0x2fd0f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_2fd0fc:
    // 0x2fd0fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fd0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd100: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fd100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fd104: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fd104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd108: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fd108u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fd10c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fd10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fd110: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD110u;
        // 0x2fd114: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD118u;
    // 0x2fd118: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2fd118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2fd11c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fd11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd120: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2fd120u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fd124: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FD124u;
    {
        const bool branch_taken_0x2fd124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD124u;
        // 0x2fd128: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd124) {
            ctx->pc = 0x2FD138u;
            goto label_2fd138;
        }
    }
    ctx->pc = 0x2FD12Cu;
    // 0x2fd12c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x2fd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x2fd130: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD130u;
        // 0x2fd134: 0x24424d60  addiu       $v0, $v0, 0x4D60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19808));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD138u;
label_2fd138:
    // 0x2fd138: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2FD138u;
    {
        const bool branch_taken_0x2fd138 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2FD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD138u;
        // 0x2fd13c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd138) {
            ctx->pc = 0x2FD180u;
            goto label_2fd180;
        }
    }
    ctx->pc = 0x2FD140u;
    // 0x2fd140: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FD140u;
    {
        const bool branch_taken_0x2fd140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD140u;
        // 0x2fd144: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd140) {
            ctx->pc = 0x2FD14Cu;
            goto label_2fd14c;
        }
    }
    ctx->pc = 0x2FD148u;
label_2fd148:
    // 0x2fd148: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2fd148u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2fd14c:
    // 0x2fd14c: 0x0  nop
    ctx->pc = 0x2fd14cu;
    // NOP
    // 0x2fd150: 0x0  nop
    ctx->pc = 0x2fd150u;
    // NOP
    // 0x2fd154: 0x0  nop
    ctx->pc = 0x2fd154u;
    // NOP
    // 0x2fd158: 0x0  nop
    ctx->pc = 0x2fd158u;
    // NOP
    // 0x2fd15c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2FD15Cu;
    {
        const bool branch_taken_0x2fd15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD15Cu;
        // 0x2fd160: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd15c) {
            ctx->pc = 0x2FD148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd148;
        }
    }
    ctx->pc = 0x2FD164u;
    // 0x2fd164: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2fd164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2fd168: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2fd168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2fd16c: 0x0  nop
    ctx->pc = 0x2fd16cu;
    // NOP
    // 0x2fd170: 0x0  nop
    ctx->pc = 0x2fd170u;
    // NOP
    // 0x2fd174: 0x0  nop
    ctx->pc = 0x2fd174u;
    // NOP
    // 0x2fd178: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2FD178u;
    {
        const bool branch_taken_0x2fd178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd178) {
            ctx->pc = 0x2FD17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD178u;
            // 0x2fd17c: 0x80620000  lb          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD14Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd14c;
        }
    }
    ctx->pc = 0x2FD180u;
label_2fd180:
    // 0x2fd180: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD180u;
        // 0x2fd184: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD188u;
}
