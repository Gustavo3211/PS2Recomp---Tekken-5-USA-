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

// Function: sub_0029A548
// Address: 0x29a548 - 0x29a670
void sub_0029A548_0x29a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A548_0x29a548");
#endif

    switch (ctx->pc) {
        case 0x29a5b8u: goto label_29a5b8;
        default: break;
    }

    ctx->pc = 0x29a548u;

    // 0x29a548: 0x8c870154  lw          $a3, 0x154($a0)
    ctx->pc = 0x29a548u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x29a54c: 0x56080  sll         $t4, $a1, 2
    ctx->pc = 0x29a54cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29a550: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x29a550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x29a554: 0x8c880150  lw          $t0, 0x150($a0)
    ctx->pc = 0x29a554u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29a558: 0xec1821  addu        $v1, $a3, $t4
    ctx->pc = 0x29a558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x29a55c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x29a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29a560: 0x8c690018  lw          $t1, 0x18($v1)
    ctx->pc = 0x29a560u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x29a564: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x29a564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x29a568: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29a568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a56c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29a570: 0x8d260080  lw          $a2, 0x80($t1)
    ctx->pc = 0x29a570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x29a574: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x29a574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x29a578: 0x8c4effec  lw          $t6, -0x14($v0)
    ctx->pc = 0x29a578u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967276)));
    // 0x29a57c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x29a57cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a580: 0x34c61000  ori         $a2, $a2, 0x1000
    ctx->pc = 0x29a580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4096);
    // 0x29a584: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x29a584u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a588: 0xad260080  sw          $a2, 0x80($t1)
    ctx->pc = 0x29a588u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 128), GPR_U32(ctx, 6));
    // 0x29a58c: 0x24e600b8  addiu       $a2, $a3, 0xB8
    ctx->pc = 0x29a58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 184));
    // 0x29a590: 0x24ea0068  addiu       $t2, $a3, 0x68
    ctx->pc = 0x29a590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 104));
    // 0x29a594: 0x24ef0098  addiu       $t7, $a3, 0x98
    ctx->pc = 0x29a594u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 152));
    // 0x29a598: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x29a598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x29a59c: 0x24f800a8  addiu       $t8, $a3, 0xA8
    ctx->pc = 0x29a59cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), 168));
    // 0x29a5a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29a5a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5a4: 0x240defff  addiu       $t5, $zero, -0x1001
    ctx->pc = 0x29a5a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x29a5a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29a5ac: 0x24490028  addiu       $t1, $v0, 0x28
    ctx->pc = 0x29a5acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x29a5b0: 0x10e102a  slt         $v0, $t0, $t6
    ctx->pc = 0x29a5b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x29a5b4: 0x0  nop
    ctx->pc = 0x29a5b4u;
    // NOP
label_29a5b8:
    // 0x29a5b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x29A5B8u;
    {
        const bool branch_taken_0x29a5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5B8u;
        // 0x29a5bc: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a5b8) {
            ctx->pc = 0x29A5F0u;
            goto label_29a5f0;
        }
    }
    ctx->pc = 0x29A5C0u;
    // 0x29a5c0: 0x1681821  addu        $v1, $t3, $t0
    ctx->pc = 0x29a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x29a5c4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x29a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x29a5c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a5cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x29a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a5d0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x29a5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x29a5d4: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x29a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x29a5d8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29a5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29a5dc: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x29a5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x29a5e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29a5e4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29a5e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29A5E8u;
    {
        const bool branch_taken_0x29a5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A5E8u;
        // 0x29a5ec: 0x34421000  ori         $v0, $v0, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a5e8) {
            ctx->pc = 0x29A61Cu;
            goto label_29a61c;
        }
    }
    ctx->pc = 0x29A5F0u;
label_29a5f0:
    // 0x29a5f0: 0x1681821  addu        $v1, $t3, $t0
    ctx->pc = 0x29a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x29a5f4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x29a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x29a5f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x29a5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x29a5fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x29a5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a600: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x29a600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x29a604: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x29a604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x29a608: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x29a608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
    // 0x29a60c: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x29a60cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x29a610: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29a610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29a614: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29a618: 0x4d1024  and         $v0, $v0, $t5
    ctx->pc = 0x29a618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 13));
label_29a61c:
    // 0x29a61c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29a620: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x29a620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x29a624: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x29a624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x29a628: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x29A628u;
    {
        const bool branch_taken_0x29a628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a628) {
            ctx->pc = 0x29A62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A628u;
            // 0x29a62c: 0x10e102a  slt         $v0, $t0, $t6 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a5b8;
        }
    }
    ctx->pc = 0x29A630u;
    // 0x29a630: 0x18f1021  addu        $v0, $t4, $t7
    ctx->pc = 0x29a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
    // 0x29a634: 0x1982821  addu        $a1, $t4, $t8
    ctx->pc = 0x29a634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 24)));
    // 0x29a638: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x29a638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a63c: 0x1863021  addu        $a2, $t4, $a2
    ctx->pc = 0x29a63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x29a640: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29a640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29a644: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29a644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29a648: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x29a648u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x29a64c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29a650: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x29a650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x29a654: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29a654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29a658: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x29a658u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x29a65c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x29a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29a660: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x29a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29a664: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x29a664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x29a668: 0x3e00008  jr          $ra
    ctx->pc = 0x29A668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A668u;
        // 0x29a66c: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A670u;
}
