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

// Function: sub_00372398
// Address: 0x372398 - 0x372410
void sub_00372398_0x372398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372398_0x372398");
#endif

    switch (ctx->pc) {
        case 0x3723ccu: goto label_3723cc;
        default: break;
    }

    ctx->pc = 0x372398u;

    // 0x372398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x372398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37239c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37239cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3723a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3723a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3723a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3723a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3723a8: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x3723a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x3723ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3723acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3723b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3723b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3723b4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3723b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3723b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3723b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3723bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3723bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3723c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3723c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3723c4: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x3723C4u;
    SET_GPR_U32(ctx, 31, 0x3723CCu);
    ctx->pc = 0x3723C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723C4u;
    // 0x3723c8: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x3723C4u, 0x3723CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723CCu;
label_3723cc:
    // 0x3723cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3723ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3723d0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3723d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3723d4: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x3723d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x3723d8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3723D8u;
    {
        const bool branch_taken_0x3723d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3723DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3723D8u;
        // 0x3723dc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3723d8) {
            ctx->pc = 0x3723F8u;
            goto label_3723f8;
        }
    }
    ctx->pc = 0x3723E0u;
    // 0x3723e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3723e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3723e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3723e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3723e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3723e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3723ec: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x3723ECu;
    ctx->pc = 0x3723F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3723ECu;
    // 0x3723f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x3723F4u;
    // 0x3723f4: 0x0  nop
    ctx->pc = 0x3723f4u;
    // NOP
label_3723f8:
    // 0x3723f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3723f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3723fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3723fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x372400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372404: 0x3e00008  jr          $ra
    ctx->pc = 0x372404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372404u;
        // 0x372408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37240Cu;
    // 0x37240c: 0x0  nop
    ctx->pc = 0x37240cu;
    // NOP
    ctx->pc = 0x372410u;
}
