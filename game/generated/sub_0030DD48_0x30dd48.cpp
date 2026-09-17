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

// Function: sub_0030DD48
// Address: 0x30dd48 - 0x30de68
void sub_0030DD48_0x30dd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DD48_0x30dd48");
#endif

    switch (ctx->pc) {
        case 0x30dda0u: goto label_30dda0;
        case 0x30ddc4u: goto label_30ddc4;
        default: break;
    }

    ctx->pc = 0x30dd48u;

    // 0x30dd48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30dd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30dd4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30dd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30dd50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30dd50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30dd54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30dd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30dd58: 0x3c131003  lui         $s3, 0x1003
    ctx->pc = 0x30dd58u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4099 << 16));
    // 0x30dd5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30dd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30dd60: 0x36734000  ori         $s3, $s3, 0x4000
    ctx->pc = 0x30dd60u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)16384);
    // 0x30dd64: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x30dd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x30dd68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30dd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30dd6c: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x30dd6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30dd70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30dd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x30dd74: 0x26344580  addiu       $s4, $s1, 0x4580
    ctx->pc = 0x30dd74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 17792));
    // 0x30dd78: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x30dd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x30dd7c: 0x24150040  addiu       $s5, $zero, 0x40
    ctx->pc = 0x30dd7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30dd80: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x30dd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x30dd84: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x30dd84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30dd88: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x30dd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x30dd8c: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x30dd8cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30dd90: 0x17ba3c  dsll32      $s7, $s7, 8
    ctx->pc = 0x30dd90u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 8));
    // 0x30dd94: 0x17ba3a  dsrl        $s7, $s7, 8
    ctx->pc = 0x30dd94u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) >> 8);
    // 0x30dd98: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x30dd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x30dd9c: 0x241e004c  addiu       $fp, $zero, 0x4C
    ctx->pc = 0x30dd9cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_30dda0:
    // 0x30dda0: 0x26300e60  addiu       $s0, $s1, 0xE60
    ctx->pc = 0x30dda0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3680));
    // 0x30dda4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x30dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30dda8: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x30dda8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x30ddac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30ddb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x30ddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x30ddb4: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x30ddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x30ddb8: 0x26300e70  addiu       $s0, $s1, 0xE70
    ctx->pc = 0x30ddb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3696));
    // 0x30ddbc: 0xc0c468c  jal         func_311A30
    ctx->pc = 0x30DDBCu;
    SET_GPR_U32(ctx, 31, 0x30DDC4u);
    ctx->pc = 0x30DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DDBCu;
    // 0x30ddc0: 0xfe1e0008  sd          $fp, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A30u, 0x30DDBCu, 0x30DDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DDC4u;
label_30ddc4:
    // 0x30ddc4: 0x8f83c55c  lw          $v1, -0x3AA4($gp)
    ctx->pc = 0x30ddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952284)));
    // 0x30ddc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30ddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30ddcc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30ddccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30ddd0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30ddd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30ddd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30ddd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30ddd8: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x30ddd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x30dddc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30dddcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30dde0: 0x26300e80  addiu       $s0, $s1, 0xE80
    ctx->pc = 0x30dde0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3712));
    // 0x30dde4: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x30dde4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x30dde8: 0xfe160008  sd          $s6, 0x8($s0)
    ctx->pc = 0x30dde8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 22));
    // 0x30ddec: 0x26300e90  addiu       $s0, $s1, 0xE90
    ctx->pc = 0x30ddecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3728));
    // 0x30ddf0: 0xfe150008  sd          $s5, 0x8($s0)
    ctx->pc = 0x30ddf0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 21));
    // 0x30ddf4: 0x8f82c544  lw          $v0, -0x3ABC($gp)
    ctx->pc = 0x30ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x30ddf8: 0x8f83c548  lw          $v1, -0x3AB8($gp)
    ctx->pc = 0x30ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x30ddfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30de00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30de00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30de04: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30de04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30de08: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30de08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30de0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30de0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30de10: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x30de10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x30de14: 0x26300ea0  addiu       $s0, $s1, 0xEA0
    ctx->pc = 0x30de14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3744));
    // 0x30de18: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x30de18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x30de1c: 0xfe120008  sd          $s2, 0x8($s0)
    ctx->pc = 0x30de1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 18));
    // 0x30de20: 0x26300eb0  addiu       $s0, $s1, 0xEB0
    ctx->pc = 0x30de20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3760));
    // 0x30de24: 0x263122c0  addiu       $s1, $s1, 0x22C0
    ctx->pc = 0x30de24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8896));
    // 0x30de28: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x30de28u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x30de2c: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x30de2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x30de30: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x30DE30u;
    {
        const bool branch_taken_0x30de30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE30u;
        // 0x30de34: 0xfe120008  sd          $s2, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30de30) {
            ctx->pc = 0x30DDA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30dda0;
        }
    }
    ctx->pc = 0x30DE38u;
    // 0x30de38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30de38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30de3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30de3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30de40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30de40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30de44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30de44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30de48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30de48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30de4c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x30de4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30de50: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x30de50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30de54: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x30de54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30de58: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x30de58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30de5c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x30de5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30de60: 0x3e00008  jr          $ra
    ctx->pc = 0x30DE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DE60u;
        // 0x30de64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DE60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DE68u;
}
