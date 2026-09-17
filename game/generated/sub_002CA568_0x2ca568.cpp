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

// Function: sub_002CA568
// Address: 0x2ca568 - 0x2ca600
void sub_002CA568_0x2ca568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA568_0x2ca568");
#endif

    switch (ctx->pc) {
        case 0x2ca584u: goto label_2ca584;
        default: break;
    }

    ctx->pc = 0x2ca568u;

    // 0x2ca568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ca568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca56c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ca56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ca570: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ca570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca574: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ca574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ca578: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ca578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ca57c: 0xc0b2a76  jal         func_2CA9D8
    ctx->pc = 0x2CA57Cu;
    SET_GPR_U32(ctx, 31, 0x2CA584u);
    ctx->pc = 0x2CA580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA57Cu;
    // 0x2ca580: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA9D8u, 0x2CA57Cu, 0x2CA584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA584u;
label_2ca584:
    // 0x2ca584: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ca584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca588: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ca588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca58c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2ca58cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ca590: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x2ca590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2ca594: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ca594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ca598: 0x8f85bb18  lw          $a1, -0x44E8($gp)
    ctx->pc = 0x2ca598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949656)));
    // 0x2ca59c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2ca59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2ca5a0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2ca5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2ca5a4: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2ca5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2ca5a8: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CA5A8u;
    {
        const bool branch_taken_0x2ca5a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5A8u;
        // 0x2ca5ac: 0xa31821  addu        $v1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5a8) {
            ctx->pc = 0x2CA5ECu;
            goto label_2ca5ec;
        }
    }
    ctx->pc = 0x2CA5B0u;
    // 0x2ca5b0: 0x620000e  bltz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2CA5B0u;
    {
        const bool branch_taken_0x2ca5b0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2CA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5B0u;
        // 0x2ca5b4: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5b0) {
            ctx->pc = 0x2CA5ECu;
            goto label_2ca5ec;
        }
    }
    ctx->pc = 0x2CA5B8u;
    // 0x2ca5b8: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2ca5b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ca5bc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA5BCu;
    {
        const bool branch_taken_0x2ca5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ca5bc) {
            ctx->pc = 0x2CA5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA5BCu;
            // 0x2ca5c0: 0x711821  addu        $v1, $v1, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA5E0u;
            goto label_2ca5e0;
        }
    }
    ctx->pc = 0x2CA5C4u;
    // 0x2ca5c4: 0x2a220007  slti        $v0, $s1, 0x7
    ctx->pc = 0x2ca5c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ca5c8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CA5C8u;
    {
        const bool branch_taken_0x2ca5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca5c8) {
            ctx->pc = 0x2CA5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA5C8u;
            // 0x2ca5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA5ECu;
            goto label_2ca5ec;
        }
    }
    ctx->pc = 0x2CA5D0u;
    // 0x2ca5d0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2ca5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2ca5d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CA5D4u;
    {
        const bool branch_taken_0x2ca5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5D4u;
        // 0x2ca5d8: 0x806203af  lb          $v0, 0x3AF($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 943)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca5d4) {
            ctx->pc = 0x2CA5E4u;
            goto label_2ca5e4;
        }
    }
    ctx->pc = 0x2CA5DCu;
    // 0x2ca5dc: 0x0  nop
    ctx->pc = 0x2ca5dcu;
    // NOP
label_2ca5e0:
    // 0x2ca5e0: 0x806203ac  lb          $v0, 0x3AC($v1)
    ctx->pc = 0x2ca5e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 940)));
label_2ca5e4:
    // 0x2ca5e4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2ca5e4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2ca5e8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ca5e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2ca5ec:
    // 0x2ca5ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ca5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca5f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ca5f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ca5f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA5F8u;
        // 0x2ca5fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA600u;
}
