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

// Function: sub_002AB460
// Address: 0x2ab460 - 0x2ab530
void sub_002AB460_0x2ab460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB460_0x2ab460");
#endif

    switch (ctx->pc) {
        case 0x2ab4a0u: goto label_2ab4a0;
        case 0x2ab4c4u: goto label_2ab4c4;
        case 0x2ab4e8u: goto label_2ab4e8;
        case 0x2ab4fcu: goto label_2ab4fc;
        default: break;
    }

    ctx->pc = 0x2ab460u;

    // 0x2ab460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ab460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ab464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ab464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ab468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ab468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab46c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ab46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ab470: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ab470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab474: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ab474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ab478: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ab478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ab47c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ab47cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab480: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2ab480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2ab484: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2ab484u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab48c: 0x26930004  addiu       $s3, $s4, 0x4
    ctx->pc = 0x2ab48cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x2ab490: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ab490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ab494: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2ab494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2ab498: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2ab498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2ab49c: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2ab49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2ab4a0:
    // 0x2ab4a0: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2ab4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x2ab4a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2AB4A4u;
    {
        const bool branch_taken_0x2ab4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB4A4u;
        // 0x2ab4a8: 0x15a840  sll         $s5, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab4a4) {
            ctx->pc = 0x2AB4D0u;
            goto label_2ab4d0;
        }
    }
    ctx->pc = 0x2AB4ACu;
    // 0x2ab4ac: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2ab4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ab4b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ab4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ab4b4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ab4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ab4b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ab4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4bc: 0xc0a9f10  jal         func_2A7C40
    ctx->pc = 0x2AB4BCu;
    SET_GPR_U32(ctx, 31, 0x2AB4C4u);
    ctx->pc = 0x2AB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB4BCu;
    // 0x2ab4c0: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7C40u, 0x2AB4BCu, 0x2AB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB4C4u;
label_2ab4c4:
    // 0x2ab4c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2AB4C4u;
    {
        const bool branch_taken_0x2ab4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB4C4u;
        // 0x2ab4c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab4c4) {
            ctx->pc = 0x2AB500u;
            goto label_2ab500;
        }
    }
    ctx->pc = 0x2AB4CCu;
    // 0x2ab4cc: 0x0  nop
    ctx->pc = 0x2ab4ccu;
    // NOP
label_2ab4d0:
    // 0x2ab4d0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2ab4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2ab4d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ab4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ab4d8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ab4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ab4dc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2ab4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ab4e0: 0xc0aa096  jal         func_2A8258
    ctx->pc = 0x2AB4E0u;
    SET_GPR_U32(ctx, 31, 0x2AB4E8u);
    ctx->pc = 0x2AB4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB4E0u;
    // 0x2ab4e4: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8258u, 0x2AB4E0u, 0x2AB4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB4E8u;
label_2ab4e8:
    // 0x2ab4e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ab4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ab4ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2ab4ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ab4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4f4: 0xc0a9f46  jal         func_2A7D18
    ctx->pc = 0x2AB4F4u;
    SET_GPR_U32(ctx, 31, 0x2AB4FCu);
    ctx->pc = 0x2AB4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB4F4u;
    // 0x2ab4f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D18u, 0x2AB4F4u, 0x2AB4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB4FCu;
label_2ab4fc:
    // 0x2ab4fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ab4fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ab500:
    // 0x2ab500: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x2ab500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2ab504: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2AB504u;
    {
        const bool branch_taken_0x2ab504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab504) {
            ctx->pc = 0x2AB508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AB504u;
            // 0x2ab508: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AB4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ab4a0;
        }
    }
    ctx->pc = 0x2AB50Cu;
    // 0x2ab50c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab510: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ab510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab514: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ab514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab518: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ab518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ab51c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ab51cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab520: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ab520u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ab524: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ab524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ab528: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB528u;
        // 0x2ab52c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB530u;
}
