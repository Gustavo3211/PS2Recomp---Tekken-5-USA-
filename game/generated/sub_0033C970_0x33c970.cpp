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

// Function: sub_0033C970
// Address: 0x33c970 - 0x33ca00
void sub_0033C970_0x33c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C970_0x33c970");
#endif

    switch (ctx->pc) {
        case 0x33c970u: goto label_33c970;
        case 0x33c974u: goto label_33c974;
        case 0x33c978u: goto label_33c978;
        case 0x33c97cu: goto label_33c97c;
        case 0x33c980u: goto label_33c980;
        case 0x33c984u: goto label_33c984;
        case 0x33c988u: goto label_33c988;
        case 0x33c98cu: goto label_33c98c;
        case 0x33c990u: goto label_33c990;
        case 0x33c994u: goto label_33c994;
        case 0x33c998u: goto label_33c998;
        case 0x33c99cu: goto label_33c99c;
        case 0x33c9a0u: goto label_33c9a0;
        case 0x33c9a4u: goto label_33c9a4;
        case 0x33c9a8u: goto label_33c9a8;
        case 0x33c9acu: goto label_33c9ac;
        case 0x33c9b0u: goto label_33c9b0;
        case 0x33c9b4u: goto label_33c9b4;
        case 0x33c9b8u: goto label_33c9b8;
        case 0x33c9bcu: goto label_33c9bc;
        case 0x33c9c0u: goto label_33c9c0;
        case 0x33c9c4u: goto label_33c9c4;
        case 0x33c9c8u: goto label_33c9c8;
        case 0x33c9ccu: goto label_33c9cc;
        case 0x33c9d0u: goto label_33c9d0;
        case 0x33c9d4u: goto label_33c9d4;
        case 0x33c9d8u: goto label_33c9d8;
        case 0x33c9dcu: goto label_33c9dc;
        case 0x33c9e0u: goto label_33c9e0;
        case 0x33c9e4u: goto label_33c9e4;
        case 0x33c9e8u: goto label_33c9e8;
        case 0x33c9ecu: goto label_33c9ec;
        case 0x33c9f0u: goto label_33c9f0;
        case 0x33c9f4u: goto label_33c9f4;
        case 0x33c9f8u: goto label_33c9f8;
        case 0x33c9fcu: goto label_33c9fc;
        default: break;
    }

    ctx->pc = 0x33c970u;

label_33c970:
    // 0x33c970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33c974:
    // 0x33c974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33c978:
    // 0x33c978: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33c978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33c97c:
    // 0x33c97c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33c980:
    // 0x33c980: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33c980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33c984:
    // 0x33c984: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33c984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33c988:
    // 0x33c988: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33c988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33c98c:
    // 0x33c98c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33c98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33c990:
    // 0x33c990: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x33c990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_33c994:
    // 0x33c994: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x33c994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_33c998:
    // 0x33c998: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33c998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33c99c:
    // 0x33c99c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33c9a0:
    // 0x33c9a0: 0x40f809  jalr        $v0
label_33c9a4:
    if (ctx->pc == 0x33C9A4u) {
        ctx->pc = 0x33C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9A0u;
        // 0x33c9a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C9A8u;
        goto label_33c9a8;
    }
    ctx->pc = 0x33C9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33C9A8u);
        ctx->pc = 0x33C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9A0u;
        // 0x33c9a4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C9A0u, 0x33C9A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C9A8u;
label_33c9a8:
    // 0x33c9a8: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x33c9a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_33c9ac:
    // 0x33c9ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33c9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c9b0:
    // 0x33c9b0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_33c9b4:
    if (ctx->pc == 0x33C9B4u) {
        ctx->pc = 0x33C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9B0u;
        // 0x33c9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C9B8u;
        goto label_33c9b8;
    }
    ctx->pc = 0x33C9B0u;
    {
        const bool branch_taken_0x33c9b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9B0u;
        // 0x33c9b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9b0) {
            ctx->pc = 0x33C9D8u;
            goto label_33c9d8;
        }
    }
    ctx->pc = 0x33C9B8u;
label_33c9b8:
    // 0x33c9b8: 0x321000f0  andi        $s0, $s0, 0xF0
    ctx->pc = 0x33c9b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)240);
label_33c9bc:
    // 0x33c9bc: 0x30a500f0  andi        $a1, $a1, 0xF0
    ctx->pc = 0x33c9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)240);
label_33c9c0:
    // 0x33c9c0: 0x2051024  and         $v0, $s0, $a1
    ctx->pc = 0x33c9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 5));
label_33c9c4:
    // 0x33c9c4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_33c9c8:
    if (ctx->pc == 0x33C9C8u) {
        ctx->pc = 0x33C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9C4u;
        // 0x33c9c8: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C9CCu;
        goto label_33c9cc;
    }
    ctx->pc = 0x33C9C4u;
    {
        const bool branch_taken_0x33c9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33c9c4) {
            ctx->pc = 0x33C9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C9C4u;
            // 0x33c9c8: 0xae510000  sw          $s1, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C9E4u;
            goto label_33c9e4;
        }
    }
    ctx->pc = 0x33C9CCu;
label_33c9cc:
    // 0x33c9cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_33c9d0:
    if (ctx->pc == 0x33C9D0u) {
        ctx->pc = 0x33C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9CCu;
        // 0x33c9d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C9D4u;
        goto label_33c9d4;
    }
    ctx->pc = 0x33C9CCu;
    {
        const bool branch_taken_0x33c9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9CCu;
        // 0x33c9d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9cc) {
            ctx->pc = 0x33C9E8u;
            goto label_33c9e8;
        }
    }
    ctx->pc = 0x33C9D4u;
label_33c9d4:
    // 0x33c9d4: 0x0  nop
    ctx->pc = 0x33c9d4u;
    // NOP
label_33c9d8:
    // 0x33c9d8: 0x16050004  bne         $s0, $a1, . + 4 + (0x4 << 2)
label_33c9dc:
    if (ctx->pc == 0x33C9DCu) {
        ctx->pc = 0x33C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9D8u;
        // 0x33c9dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C9E0u;
        goto label_33c9e0;
    }
    ctx->pc = 0x33C9D8u;
    {
        const bool branch_taken_0x33c9d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x33C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9D8u;
        // 0x33c9dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c9d8) {
            ctx->pc = 0x33C9ECu;
            goto label_33c9ec;
        }
    }
    ctx->pc = 0x33C9E0u;
label_33c9e0:
    // 0x33c9e0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x33c9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_33c9e4:
    // 0x33c9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33c9e8:
    // 0x33c9e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c9e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c9ec:
    // 0x33c9ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c9ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33c9f0:
    // 0x33c9f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33c9f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33c9f4:
    // 0x33c9f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33c9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33c9f8:
    // 0x33c9f8: 0x3e00008  jr          $ra
label_33c9fc:
    if (ctx->pc == 0x33C9FCu) {
        ctx->pc = 0x33C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9F8u;
        // 0x33c9fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CA00u;
        goto label_fallthrough_0x33c9f8;
    }
    ctx->pc = 0x33C9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C9F8u;
        // 0x33c9fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33c9f8:
    ctx->pc = 0x33CA00u;
}
