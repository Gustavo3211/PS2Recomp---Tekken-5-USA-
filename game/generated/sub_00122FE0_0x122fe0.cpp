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

// Function: sub_00122FE0
// Address: 0x122fe0 - 0x123240
void sub_00122FE0_0x122fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122FE0_0x122fe0");
#endif

    switch (ctx->pc) {
        case 0x1230d8u: goto label_1230d8;
        case 0x123108u: goto label_123108;
        case 0x1231b0u: goto label_1231b0;
        default: break;
    }

    ctx->pc = 0x122fe0u;

    // 0x122fe0: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x122fe0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122fe4: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x122fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x122fe8: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x122fe8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122fec: 0x14600091  bnez        $v1, . + 4 + (0x91 << 2)
    ctx->pc = 0x122FECu;
    {
        const bool branch_taken_0x122fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x122FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FECu;
        // 0x122ff0: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fec) {
            ctx->pc = 0x123234u;
            goto label_123234;
        }
    }
    ctx->pc = 0x122FF4u;
    // 0x122ff4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x122ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x122ff8: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x122ff8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x122ffc: 0x1460008d  bnez        $v1, . + 4 + (0x8D << 2)
    ctx->pc = 0x122FFCu;
    {
        const bool branch_taken_0x122ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x123000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FFCu;
        // 0x123000: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ffc) {
            ctx->pc = 0x123234u;
            goto label_123234;
        }
    }
    ctx->pc = 0x123004u;
    // 0x123004: 0x38e20004  xori        $v0, $a3, 0x4
    ctx->pc = 0x123004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x123008: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x123008u;
    {
        const bool branch_taken_0x123008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123008u;
        // 0x12300c: 0x38830004  xori        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123008) {
            ctx->pc = 0x123038u;
            goto label_123038;
        }
    }
    ctx->pc = 0x123010u;
    // 0x123010: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x123010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x123014: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x123014u;
    {
        const bool branch_taken_0x123014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123014) {
            ctx->pc = 0x123088u;
            goto label_123088;
        }
    }
    ctx->pc = 0x12301Cu;
    // 0x12301c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x12301cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x123020: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x123020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x123024: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x123024u;
    {
        const bool branch_taken_0x123024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x123024) {
            ctx->pc = 0x123088u;
            goto label_123088;
        }
    }
    ctx->pc = 0x12302Cu;
    // 0x12302c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12302cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x123030: 0x3e00008  jr          $ra
    ctx->pc = 0x123030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123030u;
        // 0x123034: 0x2442f208  addiu       $v0, $v0, -0xDF8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123038u;
label_123038:
    // 0x123038: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x123038u;
    {
        const bool branch_taken_0x123038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123038u;
        // 0x12303c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123038) {
            ctx->pc = 0x123234u;
            goto label_123234;
        }
    }
    ctx->pc = 0x123040u;
    // 0x123040: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x123040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x123044: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x123044u;
    {
        const bool branch_taken_0x123044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123044u;
        // 0x123048: 0x38e30002  xori        $v1, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123044) {
            ctx->pc = 0x123090u;
            goto label_123090;
        }
    }
    ctx->pc = 0x12304Cu;
    // 0x12304c: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x12304cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x123050: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x123050u;
    {
        const bool branch_taken_0x123050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123050) {
            ctx->pc = 0x123088u;
            goto label_123088;
        }
    }
    ctx->pc = 0x123058u;
    // 0x123058: 0xdd640000  ld          $a0, 0x0($t3)
    ctx->pc = 0x123058u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x12305c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x12305cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123060: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x123060u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x123064: 0xdd630008  ld          $v1, 0x8($t3)
    ctx->pc = 0x123064u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x123068: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x123068u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x12306c: 0xdd640010  ld          $a0, 0x10($t3)
    ctx->pc = 0x12306cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x123070: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x123070u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x123074: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x123074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x123078: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x123078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12307c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x12307cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x123080: 0x3e00008  jr          $ra
    ctx->pc = 0x123080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123080u;
        // 0x123084: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123088u;
label_123088:
    // 0x123088: 0x3e00008  jr          $ra
    ctx->pc = 0x123088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123088u;
        // 0x12308c: 0x160102d  daddu       $v0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123090u;
label_123090:
    // 0x123090: 0x10600068  beqz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x123090u;
    {
        const bool branch_taken_0x123090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123090u;
        // 0x123094: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123090) {
            ctx->pc = 0x123234u;
            goto label_123234;
        }
    }
    ctx->pc = 0x123098u;
    // 0x123098: 0x8d680008  lw          $t0, 0x8($t3)
    ctx->pc = 0x123098u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x12309c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x12309cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1230a0: 0xdd6a0010  ld          $t2, 0x10($t3)
    ctx->pc = 0x1230a0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x1230a4: 0x1071023  subu        $v0, $t0, $a3
    ctx->pc = 0x1230a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1230a8: 0x22023  negu        $a0, $v0
    ctx->pc = 0x1230a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1230ac: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1230acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1230b0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1230b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1230b4: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x1230b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1230b8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1230B8u;
    {
        const bool branch_taken_0x1230b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230B8u;
        // 0x1230bc: 0xdca90010  ld          $t1, 0x10($a1) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230b8) {
            ctx->pc = 0x123130u;
            goto label_123130;
        }
    }
    ctx->pc = 0x1230C0u;
    // 0x1230c0: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1230c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1230c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1230C4u;
    {
        const bool branch_taken_0x1230c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1230C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230C4u;
        // 0x1230c8: 0x107102a  slt         $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230c4) {
            ctx->pc = 0x1230FCu;
            goto label_1230fc;
        }
    }
    ctx->pc = 0x1230CCu;
    // 0x1230cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1230ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1230d0: 0x1073823  subu        $a3, $t0, $a3
    ctx->pc = 0x1230d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1230d4: 0x0  nop
    ctx->pc = 0x1230d4u;
    // NOP
label_1230d8:
    // 0x1230d8: 0x9187a  dsrl        $v1, $t1, 1
    ctx->pc = 0x1230d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> 1);
    // 0x1230dc: 0x1241024  and         $v0, $t1, $a0
    ctx->pc = 0x1230dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
    // 0x1230e0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1230e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1230e4: 0x0  nop
    ctx->pc = 0x1230e4u;
    // NOP
    // 0x1230e8: 0x0  nop
    ctx->pc = 0x1230e8u;
    // NOP
    // 0x1230ec: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1230ECu;
    {
        const bool branch_taken_0x1230ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1230F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1230ECu;
        // 0x1230f0: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1230ec) {
            ctx->pc = 0x1230D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1230d8;
        }
    }
    ctx->pc = 0x1230F4u;
    // 0x1230f4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1230f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1230f8: 0x107102a  slt         $v0, $t0, $a3
    ctx->pc = 0x1230f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1230fc:
    // 0x1230fc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1230FCu;
    {
        const bool branch_taken_0x1230fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1230fc) {
            ctx->pc = 0x123100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1230FCu;
            // 0x123100: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123150u;
            goto label_123150;
        }
    }
    ctx->pc = 0x123104u;
    // 0x123104: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x123104u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123108:
    // 0x123108: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x123108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x12310c: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x12310cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x123110: 0x14c1824  and         $v1, $t2, $t4
    ctx->pc = 0x123110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x123114: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x123114u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x123118: 0x0  nop
    ctx->pc = 0x123118u;
    // NOP
    // 0x12311c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12311Cu;
    {
        const bool branch_taken_0x12311c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x123120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12311Cu;
        // 0x123120: 0x625025  or          $t2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12311c) {
            ctx->pc = 0x123108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123108;
        }
    }
    ctx->pc = 0x123124u;
    // 0x123124: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x123124u;
    {
        const bool branch_taken_0x123124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123124u;
        // 0x123128: 0x8d640004  lw          $a0, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123124) {
            ctx->pc = 0x123150u;
            goto label_123150;
        }
    }
    ctx->pc = 0x12312Cu;
    // 0x12312c: 0x0  nop
    ctx->pc = 0x12312cu;
    // NOP
label_123130:
    // 0x123130: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x123130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x123134: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x123134u;
    {
        const bool branch_taken_0x123134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123134) {
            ctx->pc = 0x123138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123134u;
            // 0x123138: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123148u;
            goto label_123148;
        }
    }
    ctx->pc = 0x12313Cu;
    // 0x12313c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12313Cu;
    {
        const bool branch_taken_0x12313c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12313Cu;
        // 0x123140: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12313c) {
            ctx->pc = 0x12314Cu;
            goto label_12314c;
        }
    }
    ctx->pc = 0x123144u;
    // 0x123144: 0x0  nop
    ctx->pc = 0x123144u;
    // NOP
label_123148:
    // 0x123148: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x123148u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12314c:
    // 0x12314c: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x12314cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_123150:
    // 0x123150: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x123150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x123154: 0x10820024  beq         $a0, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x123154u;
    {
        const bool branch_taken_0x123154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x123158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123154u;
        // 0x123158: 0x149102f  dsubu       $v0, $t2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123154) {
            ctx->pc = 0x1231E8u;
            goto label_1231e8;
        }
    }
    ctx->pc = 0x12315Cu;
    // 0x12315c: 0x12a182f  dsubu       $v1, $t1, $t2
    ctx->pc = 0x12315cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) - GPR_U64(ctx, 10));
    // 0x123160: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x123160u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x123164: 0x4620006  bltzl       $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x123164u;
    {
        const bool branch_taken_0x123164 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x123164) {
            ctx->pc = 0x123168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123164u;
            // 0x123168: 0x3182f  dsubu       $v1, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123180u;
            goto label_123180;
        }
    }
    ctx->pc = 0x12316Cu;
    // 0x12316c: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x12316cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x123170: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x123170u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x123174: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x123174u;
    {
        const bool branch_taken_0x123174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123174u;
        // 0x123178: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123174) {
            ctx->pc = 0x123190u;
            goto label_123190;
        }
    }
    ctx->pc = 0x12317Cu;
    // 0x12317c: 0x0  nop
    ctx->pc = 0x12317cu;
    // NOP
label_123180:
    // 0x123180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x123180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123184: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x123184u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x123188: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x123188u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x12318c: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x12318cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_123190:
    // 0x123190: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x123190u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x123194: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123198: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x123198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x12319c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x12319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1231a0: 0x64e3ffff  daddiu      $v1, $a3, -0x1
    ctx->pc = 0x1231a0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4294967295);
    // 0x1231a4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1231a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1231a8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1231A8u;
    {
        const bool branch_taken_0x1231a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1231a8) {
            ctx->pc = 0x1231FCu;
            goto label_1231fc;
        }
    }
    ctx->pc = 0x1231B0u;
label_1231b0:
    // 0x1231b0: 0x72878  dsll        $a1, $a3, 1
    ctx->pc = 0x1231b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << 1);
    // 0x1231b4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1231b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1231b8: 0x64a3ffff  daddiu      $v1, $a1, -0x1
    ctx->pc = 0x1231b8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x1231bc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1231bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1231c0: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x1231c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x1231c4: 0x4213a  dsrl        $a0, $a0, 4
    ctx->pc = 0x1231c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    // 0x1231c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1231c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1231cc: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x1231ccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1231d0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1231d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x1231d4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1231d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231d8: 0x1080fff5  beqz        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1231D8u;
    {
        const bool branch_taken_0x1231d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231D8u;
        // 0x1231dc: 0xfcc50010  sd          $a1, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231d8) {
            ctx->pc = 0x1231B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1231b0;
        }
    }
    ctx->pc = 0x1231E0u;
    // 0x1231e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1231E0u;
    {
        const bool branch_taken_0x1231e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1231e0) {
            ctx->pc = 0x1231FCu;
            goto label_1231fc;
        }
    }
    ctx->pc = 0x1231E8u;
label_1231e8:
    // 0x1231e8: 0x149102d  daddu       $v0, $t2, $t1
    ctx->pc = 0x1231e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 9));
    // 0x1231ec: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x1231ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x1231f0: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x1231f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x1231f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1231f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1231f8: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x1231f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_1231fc:
    // 0x1231fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1231fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123200: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x123200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x123204: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x123204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x123208: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x123208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x12320c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12320Cu;
    {
        const bool branch_taken_0x12320c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12320Cu;
        // 0x123210: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12320c) {
            ctx->pc = 0x123230u;
            goto label_123230;
        }
    }
    ctx->pc = 0x123214u;
    // 0x123214: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x123214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x123218: 0x7207a  dsrl        $a0, $a3, 1
    ctx->pc = 0x123218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) >> 1);
    // 0x12321c: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x12321cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x123220: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x123220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x123224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x123224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x123228: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x123228u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x12322c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x12322cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_123230:
    // 0x123230: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x123230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_123234:
    // 0x123234: 0x3e00008  jr          $ra
    ctx->pc = 0x123234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12323Cu;
    // 0x12323c: 0x0  nop
    ctx->pc = 0x12323cu;
    // NOP
    ctx->pc = 0x123240u;
}
