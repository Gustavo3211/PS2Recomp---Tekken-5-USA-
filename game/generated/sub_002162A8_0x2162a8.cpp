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

// Function: sub_002162A8
// Address: 0x2162a8 - 0x2163c8
void sub_002162A8_0x2162a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002162A8_0x2162a8");
#endif

    switch (ctx->pc) {
        case 0x2163b8u: goto label_2163b8;
        default: break;
    }

    ctx->pc = 0x2162a8u;

    // 0x2162a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2162a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2162ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2162acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2162b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2162b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2162b4: 0x244283c0  addiu       $v0, $v0, -0x7C40
    ctx->pc = 0x2162b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x2162b8: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x2162b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2162bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2162bcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2162c0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x2162c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83F8u));
    // 0x2162c4: 0x38a40005  xori        $a0, $a1, 0x5
    ctx->pc = 0x2162c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
    // 0x2162c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2162C8u;
    {
        const bool branch_taken_0x2162c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2162CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162C8u;
        // 0x2162cc: 0x24680001  addiu       $t0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162c8) {
            ctx->pc = 0x2162DCu;
            goto label_2162dc;
        }
    }
    ctx->pc = 0x2162D0u;
    // 0x2162d0: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x2162d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x2162d4: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2162D4u;
    {
        const bool branch_taken_0x2162d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2162D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162D4u;
        // 0x2162d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162d4) {
            ctx->pc = 0x2163BCu;
            goto label_2163bc;
        }
    }
    ctx->pc = 0x2162DCu;
label_2162dc:
    // 0x2162dc: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x2162dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x2162e0: 0x25228858  addiu       $v0, $t1, -0x77A8
    ctx->pc = 0x2162e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936664));
    // 0x2162e4: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x2162e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x2162e8: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x2162e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2162ec: 0x3302b  sltu        $a2, $zero, $v1
    ctx->pc = 0x2162ecu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2162f0: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2162F0u;
    {
        const bool branch_taken_0x2162f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2162F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162F0u;
        // 0x2162f4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162f0) {
            ctx->pc = 0x216308u;
            goto label_216308;
        }
    }
    ctx->pc = 0x2162F8u;
    // 0x2162f8: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x2162f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2162fc: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2162FCu;
    {
        const bool branch_taken_0x2162fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2162FCu;
        // 0x216300: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162fc) {
            ctx->pc = 0x2163BCu;
            goto label_2163bc;
        }
    }
    ctx->pc = 0x216304u;
    // 0x216304: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x216304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_216308:
    // 0x216308: 0x15020013  bne         $t0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x216308u;
    {
        const bool branch_taken_0x216308 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x21630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216308u;
        // 0x21630c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216308) {
            ctx->pc = 0x216358u;
            goto label_216358;
        }
    }
    ctx->pc = 0x216310u;
    // 0x216310: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x216310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x216314: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x216314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x216318: 0x244588d0  addiu       $a1, $v0, -0x7730
    ctx->pc = 0x216318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x21631c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x21631cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x216320: 0x84620040  lh          $v0, 0x40($v1)
    ctx->pc = 0x216320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x216324: 0x54470004  bnel        $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x216324u;
    {
        const bool branch_taken_0x216324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x216324) {
            ctx->pc = 0x216328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216324u;
            // 0x216328: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216338u;
            goto label_216338;
        }
    }
    ctx->pc = 0x21632Cu;
    // 0x21632c: 0x50c00020  beql        $a2, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x21632Cu;
    {
        const bool branch_taken_0x21632c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x21632c) {
            ctx->pc = 0x216330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21632Cu;
            // 0x216330: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2163B0u;
            goto label_2163b0;
        }
    }
    ctx->pc = 0x216334u;
    // 0x216334: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x216334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_216338:
    // 0x216338: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x216338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x21633c: 0x14670006  bne         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x21633Cu;
    {
        const bool branch_taken_0x21633c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x216340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21633Cu;
        // 0x216340: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21633c) {
            ctx->pc = 0x216358u;
            goto label_216358;
        }
    }
    ctx->pc = 0x216344u;
    // 0x216344: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x216344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x216348: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216348u;
    {
        const bool branch_taken_0x216348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216348u;
        // 0x21634c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216348) {
            ctx->pc = 0x216358u;
            goto label_216358;
        }
    }
    ctx->pc = 0x216350u;
    // 0x216350: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x216350u;
    {
        const bool branch_taken_0x216350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216350u;
        // 0x216354: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216350) {
            ctx->pc = 0x2163B0u;
            goto label_2163b0;
        }
    }
    ctx->pc = 0x216358u;
label_216358:
    // 0x216358: 0x15020015  bne         $t0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x216358u;
    {
        const bool branch_taken_0x216358 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x21635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216358u;
        // 0x21635c: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216358) {
            ctx->pc = 0x2163B0u;
            goto label_2163b0;
        }
    }
    ctx->pc = 0x216360u;
    // 0x216360: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x216360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x216364: 0x244488d0  addiu       $a0, $v0, -0x7730
    ctx->pc = 0x216364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x216368: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x216368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21636c: 0x84620040  lh          $v0, 0x40($v1)
    ctx->pc = 0x21636cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x216370: 0x54450008  bnel        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x216370u;
    {
        const bool branch_taken_0x216370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x216370) {
            ctx->pc = 0x216374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216370u;
            // 0x216374: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216394u;
            goto label_216394;
        }
    }
    ctx->pc = 0x216378u;
    // 0x216378: 0x25238858  addiu       $v1, $t1, -0x77A8
    ctx->pc = 0x216378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936664));
    // 0x21637c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21637cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x216380: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x216380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x216384: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x216384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x216388: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x216388u;
    {
        const bool branch_taken_0x216388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216388) {
            ctx->pc = 0x21638Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216388u;
            // 0x21638c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2163B0u;
            goto label_2163b0;
        }
    }
    ctx->pc = 0x216390u;
    // 0x216390: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x216390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_216394:
    // 0x216394: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x216394u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x216398: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x216398u;
    {
        const bool branch_taken_0x216398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x21639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216398u;
        // 0x21639c: 0x25238858  addiu       $v1, $t1, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216398) {
            ctx->pc = 0x2163B0u;
            goto label_2163b0;
        }
    }
    ctx->pc = 0x2163A0u;
    // 0x2163a0: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2163a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2163a4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2163a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2163a8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2163A8u;
    {
        const bool branch_taken_0x2163a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2163a8) {
            ctx->pc = 0x2163ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2163A8u;
            // 0x2163ac: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2163B0u;
            goto label_2163b0;
        }
    }
    ctx->pc = 0x2163B0u;
label_2163b0:
    // 0x2163b0: 0xc0899a8  jal         func_2266A0
    ctx->pc = 0x2163B0u;
    SET_GPR_U32(ctx, 31, 0x2163B8u);
    ctx->pc = 0x2163B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2163B0u;
    // 0x2163b4: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266A0u, 0x2163B0u, 0x2163B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2163B8u;
label_2163b8:
    // 0x2163b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2163b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2163bc:
    // 0x2163bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2163BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2163C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2163BCu;
        // 0x2163c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2163BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2163C4u;
    // 0x2163c4: 0x0  nop
    ctx->pc = 0x2163c4u;
    // NOP
    ctx->pc = 0x2163c8u;
}
