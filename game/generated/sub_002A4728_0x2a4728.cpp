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

// Function: sub_002A4728
// Address: 0x2a4728 - 0x2a48a0
void sub_002A4728_0x2a4728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4728_0x2a4728");
#endif

    switch (ctx->pc) {
        case 0x2a4788u: goto label_2a4788;
        case 0x2a47e8u: goto label_2a47e8;
        case 0x2a4830u: goto label_2a4830;
        default: break;
    }

    ctx->pc = 0x2a4728u;

    // 0x2a4728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a4728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a472c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a472cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a4730: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a4730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4734: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a4734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a4738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a473c: 0x26240150  addiu       $a0, $s1, 0x150
    ctx->pc = 0x2a473cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x2a4740: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a4740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a4744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a4744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a4748: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a474c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A474Cu;
    {
        const bool branch_taken_0x2a474c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A474Cu;
        // 0x2a4750: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a474c) {
            ctx->pc = 0x2A4768u;
            goto label_2a4768;
        }
    }
    ctx->pc = 0x2A4754u;
    // 0x2a4754: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a4754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a4758: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a4758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a475c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a4760: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4760u;
    {
        const bool branch_taken_0x2a4760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A4764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4760u;
        // 0x2a4764: 0x260b0008  addiu       $t3, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4760) {
            ctx->pc = 0x2A4778u;
            goto label_2a4778;
        }
    }
    ctx->pc = 0x2A4768u;
label_2a4768:
    // 0x2a4768: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a4768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a476c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a476cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4770: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a4770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a4774: 0x260b0008  addiu       $t3, $s0, 0x8
    ctx->pc = 0x2a4774u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2a4778:
    // 0x2a4778: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a4778u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a477c: 0x2409efff  addiu       $t1, $zero, -0x1001
    ctx->pc = 0x2a477cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a4780: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x2a4780u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4784: 0x0  nop
    ctx->pc = 0x2a4784u;
    // NOP
label_2a4788:
    // 0x2a4788: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2a4788u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2a478c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a478cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a4790: 0x24c40050  addiu       $a0, $a2, 0x50
    ctx->pc = 0x2a4790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x2a4794: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x2a4794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2a4798: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x2a4798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2a479c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x2a479cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a47a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a47a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a47a4: 0x29070002  slti        $a3, $t0, 0x2
    ctx->pc = 0x2a47a4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a47a8: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2a47a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2a47ac: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2a47acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2a47b0: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2a47b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x2a47b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a47b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a47b8: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a47b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a47bc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2a47bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2a47c0: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a47c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a47c4: 0x8cc40060  lw          $a0, 0x60($a2)
    ctx->pc = 0x2a47c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x2a47c8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a47c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a47cc: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2a47ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2a47d0: 0x14e0ffed  bnez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2A47D0u;
    {
        const bool branch_taken_0x2a47d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A47D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A47D0u;
        // 0x2a47d4: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a47d0) {
            ctx->pc = 0x2A4788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4788;
        }
    }
    ctx->pc = 0x2A47D8u;
    // 0x2a47d8: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x2a47d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a47dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a47e0: 0x2408efff  addiu       $t0, $zero, -0x1001
    ctx->pc = 0x2a47e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a47e4: 0x0  nop
    ctx->pc = 0x2a47e4u;
    // NOP
label_2a47e8:
    // 0x2a47e8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2a47e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a47ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a47ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a47f0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a47f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a47f4: 0x28c50006  slti        $a1, $a2, 0x6
    ctx->pc = 0x2a47f4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a47f8: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x2a47f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2a47fc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a47fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a4800: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2a4800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2a4804: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A4804u;
    {
        const bool branch_taken_0x2a4804 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4804u;
        // 0x2a4808: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4804) {
            ctx->pc = 0x2A47E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a47e8;
        }
    }
    ctx->pc = 0x2A480Cu;
    // 0x2a480c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x2a480cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2a4810: 0x2412efff  addiu       $s2, $zero, -0x1001
    ctx->pc = 0x2a4810u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2a4814: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a4814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a4818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a481c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a481cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a4820: 0x24a5d4f8  addiu       $a1, $a1, -0x2B08
    ctx->pc = 0x2a4820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956280));
    // 0x2a4824: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2a4824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2a4828: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A4828u;
    SET_GPR_U32(ctx, 31, 0x2A4830u);
    ctx->pc = 0x2A482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4828u;
    // 0x2a482c: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A4828u, 0x2A4830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4830u;
label_2a4830:
    // 0x2a4830: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4834: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4834u;
    {
        const bool branch_taken_0x2a4834 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4834) {
            ctx->pc = 0x2A4838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4834u;
            // 0x2a4838: 0x8e02007c  lw          $v0, 0x7C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A484Cu;
            goto label_2a484c;
        }
    }
    ctx->pc = 0x2A483Cu;
    // 0x2a483c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a483cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a4840: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2a4840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x2a4844: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a4844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a4848: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x2a4848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_2a484c:
    // 0x2a484c: 0x2a640002  slti        $a0, $s3, 0x2
    ctx->pc = 0x2a484cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a4850: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x2a4850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2a4854: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x2a4854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x2a4858: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A4858u;
    {
        const bool branch_taken_0x2a4858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4858u;
        // 0x2a485c: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4858) {
            ctx->pc = 0x2A4870u;
            goto label_2a4870;
        }
    }
    ctx->pc = 0x2A4860u;
    // 0x2a4860: 0x8e030078  lw          $v1, 0x78($s0)
    ctx->pc = 0x2a4860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2a4864: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a4864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a4868: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a4868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a486c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a486cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a4870:
    // 0x2a4870: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2a4870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2a4874: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a4874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a4878: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x2a4878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x2a487c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2a487cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2a4880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a4880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4884: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2a4884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x2a4888: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a4888u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a488c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a488cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a4890: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a4890u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a4894: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a4894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4898: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4898u;
        // 0x2a489c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A48A0u;
}
