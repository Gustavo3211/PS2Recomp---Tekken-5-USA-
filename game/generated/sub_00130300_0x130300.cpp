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

// Function: sub_00130300
// Address: 0x130300 - 0x130368
void sub_00130300_0x130300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130300_0x130300");
#endif

    switch (ctx->pc) {
        case 0x130330u: goto label_130330;
        default: break;
    }

    ctx->pc = 0x130300u;

    // 0x130300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130304: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x130304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x130308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13030c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13030cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130310: 0x24424bf8  addiu       $v0, $v0, 0x4BF8
    ctx->pc = 0x130310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19448));
    // 0x130314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130318: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13031c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13031cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130320: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x130320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x130324: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x130324u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x130328: 0xc0493a2  jal         func_124E88
    ctx->pc = 0x130328u;
    SET_GPR_U32(ctx, 31, 0x130330u);
    ctx->pc = 0x13032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130328u;
    // 0x13032c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E88u, 0x130328u, 0x130330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130330u;
label_130330:
    // 0x130330: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130330u;
    {
        const bool branch_taken_0x130330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130330u;
        // 0x130334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130330) {
            ctx->pc = 0x130350u;
            goto label_130350;
        }
    }
    ctx->pc = 0x130338u;
    // 0x130338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13033c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13033cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130344: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x130344u;
    ctx->pc = 0x130348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130344u;
    // 0x130348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x13034Cu;
    // 0x13034c: 0x0  nop
    ctx->pc = 0x13034cu;
    // NOP
label_130350:
    // 0x130350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130358: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13035c: 0x3e00008  jr          $ra
    ctx->pc = 0x13035Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13035Cu;
        // 0x130360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13035Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130364u;
    // 0x130364: 0x0  nop
    ctx->pc = 0x130364u;
    // NOP
    ctx->pc = 0x130368u;
}
