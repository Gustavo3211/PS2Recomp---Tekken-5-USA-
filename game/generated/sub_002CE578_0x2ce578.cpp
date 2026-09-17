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

// Function: sub_002CE578
// Address: 0x2ce578 - 0x2ceb78
void sub_002CE578_0x2ce578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE578_0x2ce578");
#endif

    switch (ctx->pc) {
        case 0x2ce5b0u: goto label_2ce5b0;
        case 0x2ce5b8u: goto label_2ce5b8;
        case 0x2ce5fcu: goto label_2ce5fc;
        case 0x2ce628u: goto label_2ce628;
        case 0x2ce688u: goto label_2ce688;
        case 0x2ce718u: goto label_2ce718;
        case 0x2ce770u: goto label_2ce770;
        case 0x2ce820u: goto label_2ce820;
        case 0x2ce8c8u: goto label_2ce8c8;
        case 0x2cea70u: goto label_2cea70;
        case 0x2cea78u: goto label_2cea78;
        case 0x2ceb08u: goto label_2ceb08;
        default: break;
    }

    ctx->pc = 0x2ce578u;

    // 0x2ce578: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ce578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ce57c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce580: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ce580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ce584: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ce584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce588: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ce588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ce58c: 0x2632007c  addiu       $s2, $s1, 0x7C
    ctx->pc = 0x2ce58cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
    // 0x2ce590: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ce590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ce594: 0x26300078  addiu       $s0, $s1, 0x78
    ctx->pc = 0x2ce594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2ce598: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ce598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ce59c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2ce59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2ce5a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2ce5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2ce5a4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2ce5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2ce5a8: 0xc08e6d4  jal         func_239B50
    ctx->pc = 0x2CE5A8u;
    SET_GPR_U32(ctx, 31, 0x2CE5B0u);
    ctx->pc = 0x2CE5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE5A8u;
    // 0x2ce5ac: 0x3c160048  lui         $s6, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B50u, 0x2CE5A8u, 0x2CE5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE5B0u;
label_2ce5b0:
    // 0x2ce5b0: 0xc08e6d2  jal         func_239B48
    ctx->pc = 0x2CE5B0u;
    SET_GPR_U32(ctx, 31, 0x2CE5B8u);
    ctx->pc = 0x2CE5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE5B0u;
    // 0x2ce5b4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239B48u, 0x2CE5B0u, 0x2CE5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE5B8u;
label_2ce5b8:
    // 0x2ce5b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ce5b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce5bc: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2ce5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2ce5c0: 0x3284f000  andi        $a0, $s4, 0xF000
    ctx->pc = 0x2ce5c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)61440);
    // 0x2ce5c4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2ce5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ce5c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ce5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ce5cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ce5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce5d0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ce5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ce5d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ce5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ce5d8: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x2ce5d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x2ce5dc: 0x2673eab8  addiu       $s3, $s3, -0x1548
    ctx->pc = 0x2ce5dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961848));
    // 0x2ce5e0: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x2ce5e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2ce5e4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE5E4u;
    {
        const bool branch_taken_0x2ce5e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5E4u;
        // 0x2ce5e8: 0x32a2080c  andi        $v0, $s5, 0x80C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2060);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce5e4) {
            ctx->pc = 0x2CE5F4u;
            goto label_2ce5f4;
        }
    }
    ctx->pc = 0x2CE5ECu;
    // 0x2ce5ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE5ECu;
    {
        const bool branch_taken_0x2ce5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE5ECu;
        // 0x2ce5f0: 0x32828000  andi        $v0, $s4, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce5ec) {
            ctx->pc = 0x2CE600u;
            goto label_2ce600;
        }
    }
    ctx->pc = 0x2CE5F4u;
label_2ce5f4:
    // 0x2ce5f4: 0xc092940  jal         func_24A500
    ctx->pc = 0x2CE5F4u;
    SET_GPR_U32(ctx, 31, 0x2CE5FCu);
    ctx->pc = 0x2CE5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE5F4u;
    // 0x2ce5f8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x2CE5F4u, 0x2CE5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE5FCu;
label_2ce5fc:
    // 0x2ce5fc: 0x32828000  andi        $v0, $s4, 0x8000
    ctx->pc = 0x2ce5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)32768);
label_2ce600:
    // 0x2ce600: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2CE600u;
    {
        const bool branch_taken_0x2ce600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE600u;
        // 0x2ce604: 0x32822000  andi        $v0, $s4, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce600) {
            ctx->pc = 0x2CE668u;
            goto label_2ce668;
        }
    }
    ctx->pc = 0x2CE608u;
    // 0x2ce608: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ce608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce60c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ce60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ce610: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE610u;
    {
        const bool branch_taken_0x2ce610 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE610u;
        // 0x2ce614: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce610) {
            ctx->pc = 0x2CE620u;
            goto label_2ce620;
        }
    }
    ctx->pc = 0x2CE618u;
    // 0x2ce618: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2ce618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2ce61c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ce61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2ce620:
    // 0x2ce620: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2ce620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2ce624: 0x0  nop
    ctx->pc = 0x2ce624u;
    // NOP
label_2ce628:
    // 0x2ce628: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ce628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ce62c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce630: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2ce630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ce634: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ce634u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ce638: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ce638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ce63c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2ce63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2ce640: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce644: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2ce644u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce648: 0x54400141  bnel        $v0, $zero, . + 4 + (0x141 << 2)
    ctx->pc = 0x2CE648u;
    {
        const bool branch_taken_0x2ce648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce648) {
            ctx->pc = 0x2CE64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE648u;
            // 0x2ce64c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEB50u;
            goto label_2ceb50;
        }
    }
    ctx->pc = 0x2CE650u;
    // 0x2ce650: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2ce650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2ce654: 0x441fff4  bgez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CE654u;
    {
        const bool branch_taken_0x2ce654 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE654u;
        // 0x2ce658: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce654) {
            ctx->pc = 0x2CE628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce628;
        }
    }
    ctx->pc = 0x2CE65Cu;
    // 0x2ce65c: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x2CE65Cu;
    {
        const bool branch_taken_0x2ce65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE65Cu;
        // 0x2ce660: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce65c) {
            ctx->pc = 0x2CEB4Cu;
            goto label_2ceb4c;
        }
    }
    ctx->pc = 0x2CE664u;
    // 0x2ce664: 0x0  nop
    ctx->pc = 0x2ce664u;
    // NOP
label_2ce668:
    // 0x2ce668: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CE668u;
    {
        const bool branch_taken_0x2ce668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE668u;
        // 0x2ce66c: 0x32821000  andi        $v0, $s4, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce668) {
            ctx->pc = 0x2CE6C8u;
            goto label_2ce6c8;
        }
    }
    ctx->pc = 0x2CE670u;
    // 0x2ce670: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ce670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce674: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ce674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ce678: 0x2843000e  slti        $v1, $v0, 0xE
    ctx->pc = 0x2ce678u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2ce67c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE67Cu;
    {
        const bool branch_taken_0x2ce67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE67Cu;
        // 0x2ce680: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce67c) {
            ctx->pc = 0x2CE688u;
            goto label_2ce688;
        }
    }
    ctx->pc = 0x2CE684u;
    // 0x2ce684: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ce684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2ce688:
    // 0x2ce688: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ce688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ce68c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce690: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2ce690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2ce694: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2ce694u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ce698: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ce698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ce69c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2ce69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2ce6a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce6a4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2ce6a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce6a8: 0x54400129  bnel        $v0, $zero, . + 4 + (0x129 << 2)
    ctx->pc = 0x2CE6A8u;
    {
        const bool branch_taken_0x2ce6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce6a8) {
            ctx->pc = 0x2CE6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE6A8u;
            // 0x2ce6ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEB50u;
            goto label_2ceb50;
        }
    }
    ctx->pc = 0x2CE6B0u;
    // 0x2ce6b0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x2ce6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ce6b4: 0x2843000e  slti        $v1, $v0, 0xE
    ctx->pc = 0x2ce6b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x2ce6b8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2CE6B8u;
    {
        const bool branch_taken_0x2ce6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6B8u;
        // 0x2ce6bc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6b8) {
            ctx->pc = 0x2CE688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce688;
        }
    }
    ctx->pc = 0x2CE6C0u;
    // 0x2ce6c0: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x2CE6C0u;
    {
        const bool branch_taken_0x2ce6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6C0u;
        // 0x2ce6c4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6c0) {
            ctx->pc = 0x2CEB4Cu;
            goto label_2ceb4c;
        }
    }
    ctx->pc = 0x2CE6C8u;
label_2ce6c8:
    // 0x2ce6c8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CE6C8u;
    {
        const bool branch_taken_0x2ce6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6C8u;
        // 0x2ce6cc: 0x32824000  andi        $v0, $s4, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6c8) {
            ctx->pc = 0x2CE750u;
            goto label_2ce750;
        }
    }
    ctx->pc = 0x2CE6D0u;
    // 0x2ce6d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ce6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ce6d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ce6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ce6d8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE6D8u;
    {
        const bool branch_taken_0x2ce6d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CE6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE6D8u;
        // 0x2ce6dc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce6d8) {
            ctx->pc = 0x2CE6E8u;
            goto label_2ce6e8;
        }
    }
    ctx->pc = 0x2CE6E0u;
    // 0x2ce6e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ce6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ce6e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2ce6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2ce6e8:
    // 0x2ce6e8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2ce6e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ce6ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ce6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce6f0: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2ce6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2ce6f4: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2ce6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ce6f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ce6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ce6fc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2ce6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2ce700: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ce700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ce704: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2ce704u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce708: 0x54800111  bnel        $a0, $zero, . + 4 + (0x111 << 2)
    ctx->pc = 0x2CE708u;
    {
        const bool branch_taken_0x2ce708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce708) {
            ctx->pc = 0x2CE70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE708u;
            // 0x2ce70c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEB50u;
            goto label_2ceb50;
        }
    }
    ctx->pc = 0x2CE710u;
    // 0x2ce710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE710u;
    {
        const bool branch_taken_0x2ce710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE710u;
        // 0x2ce714: 0x24e5ffff  addiu       $a1, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce710) {
            ctx->pc = 0x2CE720u;
            goto label_2ce720;
        }
    }
    ctx->pc = 0x2CE718u;
label_2ce718:
    // 0x2ce718: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x2ce718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2ce71c: 0x0  nop
    ctx->pc = 0x2ce71cu;
    // NOP
label_2ce720:
    // 0x2ce720: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x2ce720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x2ce724: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2ce724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ce728: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2ce728u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ce72c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ce72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ce730: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce734: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ce734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ce738: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ce738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ce73c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2ce73cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ce740: 0x1060fff5  beqz        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CE740u;
    {
        const bool branch_taken_0x2ce740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE740u;
        // 0x2ce744: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce740) {
            ctx->pc = 0x2CE718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce718;
        }
    }
    ctx->pc = 0x2CE748u;
    // 0x2ce748: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x2CE748u;
    {
        const bool branch_taken_0x2ce748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE748u;
        // 0x2ce74c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce748) {
            ctx->pc = 0x2CEB50u;
            goto label_2ceb50;
        }
    }
    ctx->pc = 0x2CE750u;
label_2ce750:
    // 0x2ce750: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CE750u;
    {
        const bool branch_taken_0x2ce750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE750u;
        // 0x2ce754: 0x32a20004  andi        $v0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce750) {
            ctx->pc = 0x2CE7B0u;
            goto label_2ce7b0;
        }
    }
    ctx->pc = 0x2CE758u;
    // 0x2ce758: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2ce758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ce75c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ce75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ce760: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x2ce760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ce764: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE764u;
    {
        const bool branch_taken_0x2ce764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE764u;
        // 0x2ce768: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce764) {
            ctx->pc = 0x2CE770u;
            goto label_2ce770;
        }
    }
    ctx->pc = 0x2CE76Cu;
    // 0x2ce76c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2ce76cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2ce770:
    // 0x2ce770: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2ce770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ce774: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ce774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce778: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x2ce778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ce77c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ce77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ce780: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ce780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ce784: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2ce784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2ce788: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ce788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ce78c: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2ce78cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce790: 0x548000ef  bnel        $a0, $zero, . + 4 + (0xEF << 2)
    ctx->pc = 0x2CE790u;
    {
        const bool branch_taken_0x2ce790 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce790) {
            ctx->pc = 0x2CE794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE790u;
            // 0x2ce794: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEB50u;
            goto label_2ceb50;
        }
    }
    ctx->pc = 0x2CE798u;
    // 0x2ce798: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2ce798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ce79c: 0x28430005  slti        $v1, $v0, 0x5
    ctx->pc = 0x2ce79cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ce7a0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2CE7A0u;
    {
        const bool branch_taken_0x2ce7a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7A0u;
        // 0x2ce7a4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7a0) {
            ctx->pc = 0x2CE770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce770;
        }
    }
    ctx->pc = 0x2CE7A8u;
    // 0x2ce7a8: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x2CE7A8u;
    {
        const bool branch_taken_0x2ce7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7A8u;
        // 0x2ce7ac: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7a8) {
            ctx->pc = 0x2CEB4Cu;
            goto label_2ceb4c;
        }
    }
    ctx->pc = 0x2CE7B0u;
label_2ce7b0:
    // 0x2ce7b0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2CE7B0u;
    {
        const bool branch_taken_0x2ce7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7B0u;
        // 0x2ce7b4: 0x32a20008  andi        $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7b0) {
            ctx->pc = 0x2CE858u;
            goto label_2ce858;
        }
    }
    ctx->pc = 0x2CE7B8u;
    // 0x2ce7b8: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2ce7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2ce7bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ce7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ce7c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE7C0u;
    {
        const bool branch_taken_0x2ce7c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2CE7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE7C0u;
        // 0x2ce7c4: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce7c0) {
            ctx->pc = 0x2CE7D0u;
            goto label_2ce7d0;
        }
    }
    ctx->pc = 0x2CE7C8u;
    // 0x2ce7c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ce7cc: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x2ce7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_2ce7d0:
    // 0x2ce7d0: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2ce7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2ce7d4: 0x26c6eab8  addiu       $a2, $s6, -0x1548
    ctx->pc = 0x2ce7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961848));
    // 0x2ce7d8: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2ce7d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ce7dc: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2ce7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2ce7e0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ce7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce7e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ce7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ce7e8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2ce7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2ce7ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ce7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ce7f0: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2ce7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ce7f4: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2ce7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ce7f8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ce7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ce7fc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ce7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ce800: 0x469821  addu        $s3, $v0, $a2
    ctx->pc = 0x2ce800u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ce804: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2ce804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2ce808: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ce808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ce80c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2ce80cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce810: 0x544000cf  bnel        $v0, $zero, . + 4 + (0xCF << 2)
    ctx->pc = 0x2CE810u;
    {
        const bool branch_taken_0x2ce810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce810) {
            ctx->pc = 0x2CE814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE810u;
            // 0x2ce814: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEB50u;
            goto label_2ceb50;
        }
    }
    ctx->pc = 0x2CE818u;
    // 0x2ce818: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE818u;
    {
        const bool branch_taken_0x2ce818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE818u;
        // 0x2ce81c: 0x24e5ffff  addiu       $a1, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce818) {
            ctx->pc = 0x2CE828u;
            goto label_2ce828;
        }
    }
    ctx->pc = 0x2CE820u;
label_2ce820:
    // 0x2ce820: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x2ce820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2ce824: 0x0  nop
    ctx->pc = 0x2ce824u;
    // NOP
label_2ce828:
    // 0x2ce828: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x2ce828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x2ce82c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2ce82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ce830: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2ce830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ce834: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ce834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ce838: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce83c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ce83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ce840: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ce840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ce844: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2ce844u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ce848: 0x1060fff5  beqz        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CE848u;
    {
        const bool branch_taken_0x2ce848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE848u;
        // 0x2ce84c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce848) {
            ctx->pc = 0x2CE820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce820;
        }
    }
    ctx->pc = 0x2CE850u;
    // 0x2ce850: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x2CE850u;
    {
        const bool branch_taken_0x2ce850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE850u;
        // 0x2ce854: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce850) {
            ctx->pc = 0x2CEB50u;
            goto label_2ceb50;
        }
    }
    ctx->pc = 0x2CE858u;
label_2ce858:
    // 0x2ce858: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2CE858u;
    {
        const bool branch_taken_0x2ce858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE858u;
        // 0x2ce85c: 0x32820060  andi        $v0, $s4, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce858) {
            ctx->pc = 0x2CE900u;
            goto label_2ce900;
        }
    }
    ctx->pc = 0x2CE860u;
    // 0x2ce860: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2ce860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2ce864: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ce864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ce868: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x2ce868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2ce86c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CE86Cu;
    {
        const bool branch_taken_0x2ce86c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE86Cu;
        // 0x2ce870: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce86c) {
            ctx->pc = 0x2CE878u;
            goto label_2ce878;
        }
    }
    ctx->pc = 0x2CE874u;
    // 0x2ce874: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x2ce874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_2ce878:
    // 0x2ce878: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2ce878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2ce87c: 0x26c6eab8  addiu       $a2, $s6, -0x1548
    ctx->pc = 0x2ce87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961848));
    // 0x2ce880: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x2ce880u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ce884: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2ce884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2ce888: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ce888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce88c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ce88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ce890: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2ce890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2ce894: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ce894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ce898: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x2ce898u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ce89c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2ce89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ce8a0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ce8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ce8a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ce8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ce8a8: 0x469821  addu        $s3, $v0, $a2
    ctx->pc = 0x2ce8a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ce8ac: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x2ce8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2ce8b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ce8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ce8b4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2ce8b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce8b8: 0x544000a5  bnel        $v0, $zero, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2CE8B8u;
    {
        const bool branch_taken_0x2ce8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ce8b8) {
            ctx->pc = 0x2CE8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE8B8u;
            // 0x2ce8bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEB50u;
            goto label_2ceb50;
        }
    }
    ctx->pc = 0x2CE8C0u;
    // 0x2ce8c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE8C0u;
    {
        const bool branch_taken_0x2ce8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8C0u;
        // 0x2ce8c4: 0x24e5ffff  addiu       $a1, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce8c0) {
            ctx->pc = 0x2CE8D0u;
            goto label_2ce8d0;
        }
    }
    ctx->pc = 0x2CE8C8u;
label_2ce8c8:
    // 0x2ce8c8: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x2ce8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2ce8cc: 0x0  nop
    ctx->pc = 0x2ce8ccu;
    // NOP
label_2ce8d0:
    // 0x2ce8d0: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x2ce8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x2ce8d4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x2ce8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ce8d8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2ce8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ce8dc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ce8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ce8e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce8e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ce8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ce8e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ce8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ce8ec: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2ce8ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ce8f0: 0x1060fff5  beqz        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CE8F0u;
    {
        const bool branch_taken_0x2ce8f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8F0u;
        // 0x2ce8f4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce8f0) {
            ctx->pc = 0x2CE8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ce8c8;
        }
    }
    ctx->pc = 0x2CE8F8u;
    // 0x2ce8f8: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x2CE8F8u;
    {
        const bool branch_taken_0x2ce8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE8F8u;
        // 0x2ce8fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce8f8) {
            ctx->pc = 0x2CEB50u;
            goto label_2ceb50;
        }
    }
    ctx->pc = 0x2CE900u;
label_2ce900:
    // 0x2ce900: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2CE900u;
    {
        const bool branch_taken_0x2ce900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE900u;
        // 0x2ce904: 0x32a20090  andi        $v0, $s5, 0x90 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)144);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce900) {
            ctx->pc = 0x2CEAF8u;
            goto label_2ceaf8;
        }
    }
    ctx->pc = 0x2CE908u;
    // 0x2ce908: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2ce908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ce90c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ce90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ce910: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2ce910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ce914: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2ce914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ce918: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2ce918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2ce91c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2ce91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2ce920: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ce920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ce924: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x2ce924u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ce928: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x2ce928u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2ce92c: 0x50600060  beql        $v1, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x2CE92Cu;
    {
        const bool branch_taken_0x2ce92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce92c) {
            ctx->pc = 0x2CE930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE92Cu;
            // 0x2ce930: 0x8e220080  lw          $v0, 0x80($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CEAB0u;
            goto label_2ceab0;
        }
    }
    ctx->pc = 0x2CE934u;
    // 0x2ce934: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2ce934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2ce938: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ce938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2ce93c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ce93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ce940: 0x8c63ea70  lw          $v1, -0x1590($v1)
    ctx->pc = 0x2ce940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961776)));
    // 0x2ce944: 0x600008  jr          $v1
    ctx->pc = 0x2CE944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CE950u: goto label_2ce950;
            case 0x2CE9C8u: goto label_2ce9c8;
            case 0x2CEA18u: goto label_2cea18;
            case 0x2CEA60u: goto label_2cea60;
            case 0x2CEB4Cu: goto label_2ceb4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE944u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CE94Cu;
    // 0x2ce94c: 0x0  nop
    ctx->pc = 0x2ce94cu;
    // NOP
label_2ce950:
    // 0x2ce950: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x2ce950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ce954: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2ce954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2ce958: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CE958u;
    {
        const bool branch_taken_0x2ce958 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE958u;
        // 0x2ce95c: 0x2623000c  addiu       $v1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce958) {
            ctx->pc = 0x2CE978u;
            goto label_2ce978;
        }
    }
    ctx->pc = 0x2CE960u;
    // 0x2ce960: 0x2623006f  addiu       $v1, $s1, 0x6F
    ctx->pc = 0x2ce960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 111));
    // 0x2ce964: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x2ce964u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ce968: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE968u;
    {
        const bool branch_taken_0x2ce968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce968) {
            ctx->pc = 0x2CE96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CE968u;
            // 0x2ce96c: 0x2623000c  addiu       $v1, $s1, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CE978u;
            goto label_2ce978;
        }
    }
    ctx->pc = 0x2CE970u;
    // 0x2ce970: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2CE970u;
    {
        const bool branch_taken_0x2ce970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE970u;
        // 0x2ce974: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce970) {
            ctx->pc = 0x2CE99Cu;
            goto label_2ce99c;
        }
    }
    ctx->pc = 0x2CE978u;
label_2ce978:
    // 0x2ce978: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2ce978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2ce97c: 0xa0400050  sb          $zero, 0x50($v0)
    ctx->pc = 0x2ce97cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ce980: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2ce980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ce984: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CE984u;
    {
        const bool branch_taken_0x2ce984 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CE988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE984u;
        // 0x2ce988: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce984) {
            ctx->pc = 0x2CE9A0u;
            goto label_2ce9a0;
        }
    }
    ctx->pc = 0x2CE98Cu;
    // 0x2ce98c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2ce98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ce990: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ce990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ce994: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x2ce994u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x2ce998: 0xa060004f  sb          $zero, 0x4F($v1)
    ctx->pc = 0x2ce998u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 0));
label_2ce99c:
    // 0x2ce99c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce99cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ce9a0:
    // 0x2ce9a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ce9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ce9a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ce9a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce9a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ce9a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce9ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ce9acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ce9b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ce9b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce9b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ce9b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ce9b8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2ce9b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ce9bc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2ce9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ce9c0: 0x8092940  j           func_24A500
    ctx->pc = 0x2CE9C0u;
    ctx->pc = 0x2CE9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE9C0u;
    // 0x2ce9c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    sub_0024A500_0x24a500(rdram, ctx, runtime); return;
    ctx->pc = 0x2CE9C8u;
label_2ce9c8:
    // 0x2ce9c8: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x2ce9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ce9cc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x2ce9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ce9d0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ce9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ce9d4: 0xa043005c  sb          $v1, 0x5C($v0)
    ctx->pc = 0x2ce9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 92), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ce9d8: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2ce9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ce9dc: 0x28620013  slti        $v0, $v1, 0x13
    ctx->pc = 0x2ce9dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2ce9e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE9E0u;
    {
        const bool branch_taken_0x2ce9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE9E0u;
        // 0x2ce9e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce9e0) {
            ctx->pc = 0x2CE9F0u;
            goto label_2ce9f0;
        }
    }
    ctx->pc = 0x2CE9E8u;
    // 0x2ce9e8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2ce9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ce9ec: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x2ce9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_2ce9f0:
    // 0x2ce9f0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2ce9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ce9f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ce9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce9f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ce9f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce9fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ce9fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cea00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cea00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cea04: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cea04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cea08: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2cea08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cea0c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2cea0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cea10: 0x8092940  j           func_24A500
    ctx->pc = 0x2CEA10u;
    ctx->pc = 0x2CEA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA10u;
    // 0x2cea14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    sub_0024A500_0x24a500(rdram, ctx, runtime); return;
    ctx->pc = 0x2CEA18u;
label_2cea18:
    // 0x2cea18: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2cea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2cea1c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2cea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cea20: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x2cea20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cea24: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CEA24u;
    {
        const bool branch_taken_0x2cea24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEA24u;
        // 0x2cea28: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cea24) {
            ctx->pc = 0x2CEA30u;
            goto label_2cea30;
        }
    }
    ctx->pc = 0x2CEA2Cu;
    // 0x2cea2c: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x2cea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_2cea30:
    // 0x2cea30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cea30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cea34: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2cea34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cea38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cea38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cea3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cea3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cea40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cea40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cea44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cea44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cea48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cea48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cea4c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2cea4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cea50: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2cea50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cea54: 0x8092940  j           func_24A500
    ctx->pc = 0x2CEA54u;
    ctx->pc = 0x2CEA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA54u;
    // 0x2cea58: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    sub_0024A500_0x24a500(rdram, ctx, runtime); return;
    ctx->pc = 0x2CEA5Cu;
    // 0x2cea5c: 0x0  nop
    ctx->pc = 0x2cea5cu;
    // NOP
label_2cea60:
    // 0x2cea60: 0x2630005c  addiu       $s0, $s1, 0x5C
    ctx->pc = 0x2cea60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x2cea64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cea64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cea68: 0xc0b388a  jal         func_2CE228
    ctx->pc = 0x2CEA68u;
    SET_GPR_U32(ctx, 31, 0x2CEA70u);
    ctx->pc = 0x2CEA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA68u;
    // 0x2cea6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE228u, 0x2CEA68u, 0x2CEA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA70u;
label_2cea70:
    // 0x2cea70: 0xc0b7214  jal         func_2DC850
    ctx->pc = 0x2CEA70u;
    SET_GPR_U32(ctx, 31, 0x2CEA78u);
    ctx->pc = 0x2CEA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEA70u;
    // 0x2cea74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC850u, 0x2CEA70u, 0x2CEA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEA78u;
label_2cea78:
    // 0x2cea78: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x2cea78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x2cea7c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2cea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cea80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cea80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cea84: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x2cea84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x2cea88: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2cea88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cea8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cea8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cea90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cea90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cea94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cea94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cea98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cea98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cea9c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cea9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ceaa0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2ceaa0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ceaa4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2ceaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ceaa8: 0x8092940  j           func_24A500
    ctx->pc = 0x2CEAA8u;
    ctx->pc = 0x2CEAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEAA8u;
    // 0x2ceaac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    sub_0024A500_0x24a500(rdram, ctx, runtime); return;
    ctx->pc = 0x2CEAB0u;
label_2ceab0:
    // 0x2ceab0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2ceab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2ceab4: 0xa044005c  sb          $a0, 0x5C($v0)
    ctx->pc = 0x2ceab4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 92), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ceab8: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x2ceab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x2ceabc: 0x28620013  slti        $v0, $v1, 0x13
    ctx->pc = 0x2ceabcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2ceac0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CEAC0u;
    {
        const bool branch_taken_0x2ceac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAC0u;
        // 0x2ceac4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceac0) {
            ctx->pc = 0x2CEAD0u;
            goto label_2cead0;
        }
    }
    ctx->pc = 0x2CEAC8u;
    // 0x2ceac8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2ceac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ceacc: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x2ceaccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_2cead0:
    // 0x2cead0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2cead0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cead4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cead4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cead8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cead8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ceadc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ceadcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ceae0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ceae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ceae4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ceae4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ceae8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2ceae8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ceaec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2ceaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ceaf0: 0x8092940  j           func_24A500
    ctx->pc = 0x2CEAF0u;
    ctx->pc = 0x2CEAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEAF0u;
    // 0x2ceaf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    sub_0024A500_0x24a500(rdram, ctx, runtime); return;
    ctx->pc = 0x2CEAF8u;
label_2ceaf8:
    // 0x2ceaf8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CEAF8u;
    {
        const bool branch_taken_0x2ceaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEAF8u;
        // 0x2ceafc: 0x32a20800  andi        $v0, $s5, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceaf8) {
            ctx->pc = 0x2CEB38u;
            goto label_2ceb38;
        }
    }
    ctx->pc = 0x2CEB00u;
    // 0x2ceb00: 0xc0b2e44  jal         func_2CB910
    ctx->pc = 0x2CEB00u;
    SET_GPR_U32(ctx, 31, 0x2CEB08u);
    ctx->pc = 0x2CEB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB00u;
    // 0x2ceb04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB910u, 0x2CEB00u, 0x2CEB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB08u;
label_2ceb08:
    // 0x2ceb08: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ceb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ceb0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ceb0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ceb10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ceb10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ceb14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ceb14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ceb18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ceb18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ceb1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ceb1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ceb20: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ceb20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ceb24: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2ceb24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ceb28: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2ceb28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ceb2c: 0x8092940  j           func_24A500
    ctx->pc = 0x2CEB2Cu;
    ctx->pc = 0x2CEB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB2Cu;
    // 0x2ceb30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    sub_0024A500_0x24a500(rdram, ctx, runtime); return;
    ctx->pc = 0x2CEB34u;
    // 0x2ceb34: 0x0  nop
    ctx->pc = 0x2ceb34u;
    // NOP
label_2ceb38:
    // 0x2ceb38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CEB38u;
    {
        const bool branch_taken_0x2ceb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB38u;
        // 0x2ceb3c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceb38) {
            ctx->pc = 0x2CEB4Cu;
            goto label_2ceb4c;
        }
    }
    ctx->pc = 0x2CEB40u;
    // 0x2ceb40: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ceb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ceb44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ceb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ceb48: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2ceb48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2ceb4c:
    // 0x2ceb4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ceb4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ceb50:
    // 0x2ceb50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ceb50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ceb54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ceb54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ceb58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ceb58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ceb5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ceb5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ceb60: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ceb60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ceb64: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2ceb64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ceb68: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2ceb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ceb6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEB6Cu;
        // 0x2ceb70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEB74u;
    // 0x2ceb74: 0x0  nop
    ctx->pc = 0x2ceb74u;
    // NOP
    ctx->pc = 0x2ceb78u;
}
