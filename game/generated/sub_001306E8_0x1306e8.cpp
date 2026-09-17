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

// Function: sub_001306E8
// Address: 0x1306e8 - 0x130750
void sub_001306E8_0x1306e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001306E8_0x1306e8");
#endif

    switch (ctx->pc) {
        case 0x130718u: goto label_130718;
        default: break;
    }

    ctx->pc = 0x1306e8u;

    // 0x1306e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1306e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1306ec: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1306ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1306f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1306f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1306f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1306f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1306f8: 0x24424cf8  addiu       $v0, $v0, 0x4CF8
    ctx->pc = 0x1306f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19704));
    // 0x1306fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1306fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130700: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130704: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x130704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130708: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x130708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x13070c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x13070cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x130710: 0xc0493a2  jal         func_124E88
    ctx->pc = 0x130710u;
    SET_GPR_U32(ctx, 31, 0x130718u);
    ctx->pc = 0x130714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130710u;
    // 0x130714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E88u, 0x130710u, 0x130718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130718u;
label_130718:
    // 0x130718: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130718u;
    {
        const bool branch_taken_0x130718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130718u;
        // 0x13071c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130718) {
            ctx->pc = 0x130738u;
            goto label_130738;
        }
    }
    ctx->pc = 0x130720u;
    // 0x130720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13072c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x13072Cu;
    ctx->pc = 0x130730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13072Cu;
    // 0x130730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x130734u;
    // 0x130734: 0x0  nop
    ctx->pc = 0x130734u;
    // NOP
label_130738:
    // 0x130738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13073c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13073cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130744: 0x3e00008  jr          $ra
    ctx->pc = 0x130744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130744u;
        // 0x130748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13074Cu;
    // 0x13074c: 0x0  nop
    ctx->pc = 0x13074cu;
    // NOP
    ctx->pc = 0x130750u;
}
