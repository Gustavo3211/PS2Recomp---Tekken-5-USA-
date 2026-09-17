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

// Function: sub_002CA4A8
// Address: 0x2ca4a8 - 0x2ca568
void sub_002CA4A8_0x2ca4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA4A8_0x2ca4a8");
#endif

    switch (ctx->pc) {
        case 0x2ca4dcu: goto label_2ca4dc;
        default: break;
    }

    ctx->pc = 0x2ca4a8u;

    // 0x2ca4a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca4ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ca4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ca4b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ca4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ca4b4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ca4b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca4bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2ca4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ca4c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ca4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2ca4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2ca4cc: 0x1243001f  beq         $s2, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2CA4CCu;
    {
        const bool branch_taken_0x2ca4cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA4CCu;
        // 0x2ca4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca4cc) {
            ctx->pc = 0x2CA54Cu;
            goto label_2ca54c;
        }
    }
    ctx->pc = 0x2CA4D4u;
    // 0x2ca4d4: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2CA4D4u;
    SET_GPR_U32(ctx, 31, 0x2CA4DCu);
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2CA4D4u, 0x2CA4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA4DCu;
label_2ca4dc:
    // 0x2ca4dc: 0x8f86bb18  lw          $a2, -0x44E8($gp)
    ctx->pc = 0x2ca4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2ca4e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ca4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca4e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca4e8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ca4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ca4ec: 0x1120c0  sll         $a0, $s1, 3
    ctx->pc = 0x2ca4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2ca4f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ca4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ca4f4: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x2ca4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2ca4f8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ca4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ca4fc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2ca4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ca500: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2ca500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ca504: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CA504u;
    {
        const bool branch_taken_0x2ca504 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA504u;
        // 0x2ca508: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca504) {
            ctx->pc = 0x2CA54Cu;
            goto label_2ca54c;
        }
    }
    ctx->pc = 0x2CA50Cu;
    // 0x2ca50c: 0x600000e  bltz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CA50Cu;
    {
        const bool branch_taken_0x2ca50c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2CA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA50Cu;
        // 0x2ca510: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca50c) {
            ctx->pc = 0x2CA548u;
            goto label_2ca548;
        }
    }
    ctx->pc = 0x2CA514u;
    // 0x2ca514: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA514u;
    {
        const bool branch_taken_0x2ca514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca514) {
            ctx->pc = 0x2CA518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA514u;
            // 0x2ca518: 0x701821  addu        $v1, $v1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA538u;
            goto label_2ca538;
        }
    }
    ctx->pc = 0x2CA51Cu;
    // 0x2ca51c: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x2ca51cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ca520: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2CA520u;
    {
        const bool branch_taken_0x2ca520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca520) {
            ctx->pc = 0x2CA524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA520u;
            // 0x2ca524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA54Cu;
            goto label_2ca54c;
        }
    }
    ctx->pc = 0x2CA528u;
    // 0x2ca528: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2ca528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ca52c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA52Cu;
    {
        const bool branch_taken_0x2ca52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA52Cu;
        // 0x2ca530: 0x806203af  lb          $v0, 0x3AF($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 943)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca52c) {
            ctx->pc = 0x2CA53Cu;
            goto label_2ca53c;
        }
    }
    ctx->pc = 0x2CA534u;
    // 0x2ca534: 0x0  nop
    ctx->pc = 0x2ca534u;
    // NOP
label_2ca538:
    // 0x2ca538: 0x806203ac  lb          $v0, 0x3AC($v1)
    ctx->pc = 0x2ca538u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 940)));
label_2ca53c:
    // 0x2ca53c: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x2ca53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x2ca540: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CA540u;
    {
        const bool branch_taken_0x2ca540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA540u;
        // 0x2ca544: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca540) {
            ctx->pc = 0x2CA54Cu;
            goto label_2ca54c;
        }
    }
    ctx->pc = 0x2CA548u;
label_2ca548:
    // 0x2ca548: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca54c:
    // 0x2ca54c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca54cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca550: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca554: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ca554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca558: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2ca558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ca55c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA55Cu;
        // 0x2ca560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA564u;
    // 0x2ca564: 0x0  nop
    ctx->pc = 0x2ca564u;
    // NOP
    ctx->pc = 0x2ca568u;
}
