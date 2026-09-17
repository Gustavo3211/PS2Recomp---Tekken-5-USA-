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

// Function: sub_0033E4C8
// Address: 0x33e4c8 - 0x33e548
void sub_0033E4C8_0x33e4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E4C8_0x33e4c8");
#endif

    switch (ctx->pc) {
        case 0x33e4c8u: goto label_33e4c8;
        case 0x33e4ccu: goto label_33e4cc;
        case 0x33e4d0u: goto label_33e4d0;
        case 0x33e4d4u: goto label_33e4d4;
        case 0x33e4d8u: goto label_33e4d8;
        case 0x33e4dcu: goto label_33e4dc;
        case 0x33e4e0u: goto label_33e4e0;
        case 0x33e4e4u: goto label_33e4e4;
        case 0x33e4e8u: goto label_33e4e8;
        case 0x33e4ecu: goto label_33e4ec;
        case 0x33e4f0u: goto label_33e4f0;
        case 0x33e4f4u: goto label_33e4f4;
        case 0x33e4f8u: goto label_33e4f8;
        case 0x33e4fcu: goto label_33e4fc;
        case 0x33e500u: goto label_33e500;
        case 0x33e504u: goto label_33e504;
        case 0x33e508u: goto label_33e508;
        case 0x33e50cu: goto label_33e50c;
        case 0x33e510u: goto label_33e510;
        case 0x33e514u: goto label_33e514;
        case 0x33e518u: goto label_33e518;
        case 0x33e51cu: goto label_33e51c;
        case 0x33e520u: goto label_33e520;
        case 0x33e524u: goto label_33e524;
        case 0x33e528u: goto label_33e528;
        case 0x33e52cu: goto label_33e52c;
        case 0x33e530u: goto label_33e530;
        case 0x33e534u: goto label_33e534;
        case 0x33e538u: goto label_33e538;
        case 0x33e53cu: goto label_33e53c;
        case 0x33e540u: goto label_33e540;
        case 0x33e544u: goto label_33e544;
        default: break;
    }

    ctx->pc = 0x33e4c8u;

label_33e4c8:
    // 0x33e4c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33e4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33e4cc:
    // 0x33e4cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33e4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33e4d0:
    // 0x33e4d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33e4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33e4d4:
    // 0x33e4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33e4d8:
    // 0x33e4d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33e4dc:
    // 0x33e4dc: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_33e4e0:
    if (ctx->pc == 0x33E4E0u) {
        ctx->pc = 0x33E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4DCu;
        // 0x33e4e0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E4E4u;
        goto label_33e4e4;
    }
    ctx->pc = 0x33E4DCu;
    {
        const bool branch_taken_0x33e4dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4DCu;
        // 0x33e4e0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e4dc) {
            ctx->pc = 0x33E4F8u;
            goto label_33e4f8;
        }
    }
    ctx->pc = 0x33E4E4u;
label_33e4e4:
    // 0x33e4e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e4e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33e4e8:
    // 0x33e4e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33e4e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33e4ec:
    // 0x33e4ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33e4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33e4f0:
    // 0x33e4f0: 0x80c77e2  j           func_31DF88
label_33e4f4:
    if (ctx->pc == 0x33E4F4u) {
        ctx->pc = 0x33E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4F0u;
        // 0x33e4f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E4F8u;
        goto label_33e4f8;
    }
    ctx->pc = 0x33E4F0u;
    ctx->pc = 0x33E4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E4F0u;
    // 0x33e4f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DF88u;
    sub_0031DF88_0x31df88(rdram, ctx, runtime); return;
    ctx->pc = 0x33E4F8u;
label_33e4f8:
    // 0x33e4f8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x33e4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33e4fc:
    // 0x33e4fc: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x33e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_33e500:
    // 0x33e500: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e504:
    // 0x33e504: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e508:
    // 0x33e508: 0x40f809  jalr        $v0
label_33e50c:
    if (ctx->pc == 0x33E50Cu) {
        ctx->pc = 0x33E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E508u;
        // 0x33e50c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E510u;
        goto label_33e510;
    }
    ctx->pc = 0x33E508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E510u);
        ctx->pc = 0x33E50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E508u;
        // 0x33e50c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E508u, 0x33E510u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E510u;
label_33e510:
    // 0x33e510: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33e510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33e514:
    // 0x33e514: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x33e514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e518:
    // 0x33e518: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x33e518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33e51c:
    // 0x33e51c: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x33e51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_33e520:
    // 0x33e520: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x33e520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_33e524:
    // 0x33e524: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e528:
    // 0x33e528: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e52c:
    // 0x33e52c: 0x40f809  jalr        $v0
label_33e530:
    if (ctx->pc == 0x33E530u) {
        ctx->pc = 0x33E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E52Cu;
        // 0x33e530: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E534u;
        goto label_33e534;
    }
    ctx->pc = 0x33E52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E534u);
        ctx->pc = 0x33E530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E52Cu;
        // 0x33e530: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E52Cu, 0x33E534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E534u;
label_33e534:
    // 0x33e534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33e538:
    // 0x33e538: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33e538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33e53c:
    // 0x33e53c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33e53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33e540:
    // 0x33e540: 0x3e00008  jr          $ra
label_33e544:
    if (ctx->pc == 0x33E544u) {
        ctx->pc = 0x33E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E540u;
        // 0x33e544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E548u;
        goto label_fallthrough_0x33e540;
    }
    ctx->pc = 0x33E540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E540u;
        // 0x33e544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33e540:
    ctx->pc = 0x33E548u;
}
