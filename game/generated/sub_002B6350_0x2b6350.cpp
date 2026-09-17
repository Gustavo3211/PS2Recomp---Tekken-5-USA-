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

// Function: sub_002B6350
// Address: 0x2b6350 - 0x2b63c8
void sub_002B6350_0x2b6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6350_0x2b6350");
#endif

    switch (ctx->pc) {
        case 0x2b638cu: goto label_2b638c;
        case 0x2b639cu: goto label_2b639c;
        case 0x2b63acu: goto label_2b63ac;
        default: break;
    }

    ctx->pc = 0x2b6350u;

label_2b6350:
    // 0x2b6350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6358: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b6358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b635c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b635cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b6360: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b6360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6364: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b6364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b6368: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b6368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b636c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B636Cu;
    {
        const bool branch_taken_0x2b636c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B636Cu;
        // 0x2b6370: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b636c) {
            ctx->pc = 0x2B63ACu;
            goto label_2b63ac;
        }
    }
    ctx->pc = 0x2B6374u;
    // 0x2b6374: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x2b6374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2b6378: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b6378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b637c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2B637Cu;
    {
        const bool branch_taken_0x2b637c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b637c) {
            ctx->pc = 0x2B6380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B637Cu;
            // 0x2b6380: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B63B0u;
            goto label_2b63b0;
        }
    }
    ctx->pc = 0x2B6384u;
    // 0x2b6384: 0xc0ab944  jal         func_2AE510
    ctx->pc = 0x2B6384u;
    SET_GPR_U32(ctx, 31, 0x2B638Cu);
    ctx->pc = 0x2B6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6384u;
    // 0x2b6388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE510u, 0x2B6384u, 0x2B638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B638Cu;
label_2b638c:
    // 0x2b638c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b638cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6390: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x2b6390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2b6394: 0xc0ad8d4  jal         func_2B6350
    ctx->pc = 0x2B6394u;
    SET_GPR_U32(ctx, 31, 0x2B639Cu);
    ctx->pc = 0x2B6398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6394u;
    // 0x2b6398: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6350u;
    goto label_2b6350;
    ctx->pc = 0x2B639Cu;
label_2b639c:
    // 0x2b639c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b63a0: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x2b63a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b63a4: 0xc0ad8d4  jal         func_2B6350
    ctx->pc = 0x2B63A4u;
    SET_GPR_U32(ctx, 31, 0x2B63ACu);
    ctx->pc = 0x2B63A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B63A4u;
    // 0x2b63a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6350u;
    goto label_2b6350;
    ctx->pc = 0x2B63ACu;
label_2b63ac:
    // 0x2b63ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b63acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b63b0:
    // 0x2b63b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b63b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b63b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b63b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b63b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b63b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b63bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B63BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63BCu;
        // 0x2b63c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B63BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B63C4u;
    // 0x2b63c4: 0x0  nop
    ctx->pc = 0x2b63c4u;
    // NOP
    ctx->pc = 0x2b63c8u;
}
