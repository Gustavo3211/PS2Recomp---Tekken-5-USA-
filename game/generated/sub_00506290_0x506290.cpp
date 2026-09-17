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

// Function: sub_00506290
// Address: 0x506290 - 0x506520
void sub_00506290_0x506290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506290_0x506290");
#endif

    switch (ctx->pc) {
        case 0x5062c8u: goto label_5062c8;
        case 0x506308u: goto label_506308;
        case 0x5063c8u: goto label_5063c8;
        case 0x50643cu: goto label_50643c;
        case 0x506494u: goto label_506494;
        case 0x50649cu: goto label_50649c;
        default: break;
    }

    ctx->pc = 0x506290u;

    // 0x506290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x506290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x506294: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x506294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x506298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x506298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x50629c: 0x2450f080  addiu       $s0, $v0, -0xF80
    ctx->pc = 0x50629cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x5062a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5062a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5062a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5062a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5062a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x5062a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x5062ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x5062acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x5062b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x5062b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x5062b4: 0x86030024  lh          $v1, 0x24($s0)
    ctx->pc = 0x5062b4u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x8FF0A4u));
    // 0x5062b8: 0x54600011  bnel        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x5062B8u;
    {
        const bool branch_taken_0x5062b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5062b8) {
            ctx->pc = 0x5062BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5062B8u;
            // 0x5062bc: 0x3c040034  lui         $a0, 0x34 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x506300u;
            goto label_506300;
        }
    }
    ctx->pc = 0x5062C0u;
    // 0x5062c0: 0xc144432  jal         func_5110C8
    ctx->pc = 0x5062C0u;
    SET_GPR_U32(ctx, 31, 0x5062C8u);
    ctx->pc = 0x5062C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5062C0u;
    // 0x5062c4: 0x3c040034  lui         $a0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5110C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5110C8u, 0x5062C0u, 0x5062C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5062C8u;
label_5062c8:
    // 0x5062c8: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5062c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5062cc: 0x2463c52c  addiu       $v1, $v1, -0x3AD4
    ctx->pc = 0x5062ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952236));
    // 0x5062d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5062d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5062d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x5062d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC52Cu));
    // 0x5062d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5062d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5062dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5062dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5062e0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x5062e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x5062e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5062e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5062e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5062e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5062ec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x5062ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5062f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x5062f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC52Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC52Cu, _value); } while (0);
    // 0x5062f4: 0x3e00008  jr          $ra
    ctx->pc = 0x5062F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5062F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5062F4u;
        // 0x5062f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5062F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5062FCu;
    // 0x5062fc: 0x0  nop
    ctx->pc = 0x5062fcu;
    // NOP
label_506300:
    // 0x506300: 0xc1444c6  jal         func_511318
    ctx->pc = 0x506300u;
    SET_GPR_U32(ctx, 31, 0x506308u);
    ctx->pc = 0x506304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506300u;
    // 0x506304: 0x3c12ffff  lui         $s2, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511318u, 0x506300u, 0x506308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506308u;
label_506308:
    // 0x506308: 0x3c0a008f  lui         $t2, 0x8F
    ctx->pc = 0x506308u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)143 << 16));
    // 0x50630c: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50630cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x506310: 0x254ac544  addiu       $t2, $t2, -0x3ABC
    ctx->pc = 0x506310u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952260));
    // 0x506314: 0x2453c52c  addiu       $s3, $v0, -0x3AD4
    ctx->pc = 0x506314u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952236));
    // 0x506318: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x506318u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EC544u));
    // 0x50631c: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x50631cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x8EC52Cu));
    // 0x506320: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x506320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x506324: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x506324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x506328: 0x2471c540  addiu       $s1, $v1, -0x3AC0
    ctx->pc = 0x506328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952256));
    // 0x50632c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x50632cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x506330: 0x24c90002  addiu       $t1, $a2, 0x2
    ctx->pc = 0x506330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x506334: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x506334u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC540u));
    // 0x506338: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x506338u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x50633c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50633cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x506340: 0x2508c538  addiu       $t0, $t0, -0x3AC8
    ctx->pc = 0x506340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952248));
    // 0x506344: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x506344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x506348: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x506348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x50634c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x50634cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x506350: 0x24cb0004  addiu       $t3, $a2, 0x4
    ctx->pc = 0x506350u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x506354: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x506354u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x506358: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x506358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50635c: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x50635cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x506360: 0x24d40006  addiu       $s4, $a2, 0x6
    ctx->pc = 0x506360u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x506364: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x506364u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x506368: 0x24e77340  addiu       $a3, $a3, 0x7340
    ctx->pc = 0x506368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29504));
    // 0x50636c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x50636cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x506370: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x506370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x506374: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x506374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x506378: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x506378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x50637c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506380: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x506380u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x506384: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x506384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506388: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x506388u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50638c: 0xae690000  sw          $t1, 0x0($s3)
    ctx->pc = 0x50638cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 9));
    // 0x506390: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x506390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x506394: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506398: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x506398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x50639c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x50639cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x5063a0: 0xae6b0000  sw          $t3, 0x0($s3)
    ctx->pc = 0x5063a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 11));
    // 0x5063a4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x5063a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x5063a8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x5063a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x5063ac: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x5063acu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x5063b0: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x5063b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x5063b4: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x5063b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x5063b8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x5063b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x5063bc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x5063bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x5063c0: 0xc14187e  jal         func_5061F8
    ctx->pc = 0x5063C0u;
    SET_GPR_U32(ctx, 31, 0x5063C8u);
    ctx->pc = 0x5063C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5063C0u;
    // 0x5063c4: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5061F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5061F8u, 0x5063C0u, 0x5063C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5063C8u;
label_5063c8:
    // 0x5063c8: 0x96030022  lhu         $v1, 0x22($s0)
    ctx->pc = 0x5063c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x5063cc: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x5063ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x5063d0: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x5063d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x5063d4: 0x2450c534  addiu       $s0, $v0, -0x3ACC
    ctx->pc = 0x5063d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952244));
    // 0x5063d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5063d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC534u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC534u, _value); } while (0);
    // 0x5063dc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x5063dcu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8EC534u));
    // 0x5063e0: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x5063e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x5063e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5063E4u;
    {
        const bool branch_taken_0x5063e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5063E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5063E4u;
        // 0x5063e8: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5063e4) {
            ctx->pc = 0x5063F8u;
            goto label_5063f8;
        }
    }
    ctx->pc = 0x5063ECu;
    // 0x5063ec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x5063ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x5063f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5063f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x5063f4: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x5063f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_5063f8:
    // 0x5063f8: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x5063f8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x5063fc: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x5063fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x506400: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x506400u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x506404: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x506404u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x506408: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x506408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50640c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x50640cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x506410: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x506410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x506414: 0x24a50016  addiu       $a1, $a1, 0x16
    ctx->pc = 0x506414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
    // 0x506418: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x506418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x50641c: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x50641cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x506420: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x506420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x506424: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x506424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506428: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x506428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50642c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x50642cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x506430: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x506430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x506434: 0xc141728  jal         func_505CA0
    ctx->pc = 0x506434u;
    SET_GPR_U32(ctx, 31, 0x50643Cu);
    ctx->pc = 0x506438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506434u;
    // 0x506438: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505CA0u, 0x506434u, 0x50643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50643Cu;
label_50643c:
    // 0x50643c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50643cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x506440: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x506440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x506444: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x506444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x506448: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x506448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x50644c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50644cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506450: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506454: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x506454u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x506458: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x506458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50645c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50645cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x506460: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x506460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506464: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x506464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x506468: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x506468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50646c: 0x84e60000  lh          $a2, 0x0($a3)
    ctx->pc = 0x50646cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x506470: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x506470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x506474: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x506474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x506478: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x506478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x50647c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x50647cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x506480: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x506480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x506484: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x506484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x506488: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50648c: 0xc141728  jal         func_505CA0
    ctx->pc = 0x50648Cu;
    SET_GPR_U32(ctx, 31, 0x506494u);
    ctx->pc = 0x506490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50648Cu;
    // 0x506490: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x505CA0u, 0x50648Cu, 0x506494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506494u;
label_506494:
    // 0x506494: 0xc124620  jal         func_491880
    ctx->pc = 0x506494u;
    SET_GPR_U32(ctx, 31, 0x50649Cu);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x506494u, 0x50649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50649Cu;
label_50649c:
    // 0x50649c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x50649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x5064a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x5064a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x5064a4: 0x8463f238  lh          $v1, -0xDC8($v1)
    ctx->pc = 0x5064a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963768)));
    // 0x5064a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x5064a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5064ac: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x5064acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x5064b0: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x5064b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x5064b4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x5064b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x5064b8: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x5064b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5064bc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x5064bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x5064c0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x5064c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5064c4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x5064c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x5064c8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x5064c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x5064cc: 0x24a50011  addiu       $a1, $a1, 0x11
    ctx->pc = 0x5064ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17));
    // 0x5064d0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x5064d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x5064d4: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x5064d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5064d8: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x5064d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x5064dc: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x5064dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5064e0: 0xb22825  or          $a1, $a1, $s2
    ctx->pc = 0x5064e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x5064e4: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x5064e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x5064e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5064e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5064ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5064ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5064f0: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x5064f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x5064f4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x5064f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x5064f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5064f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5064fc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x5064fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x506500: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x506500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x506504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x506504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x506508: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x506508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x50650c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50650cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x506510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x506510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506514: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x506514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x506518: 0x8141728  j           func_505CA0
    ctx->pc = 0x506518u;
    ctx->pc = 0x50651Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506518u;
    // 0x50651c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x505CA0u;
    sub_00505CA0_0x505ca0(rdram, ctx, runtime); return;
    ctx->pc = 0x506520u;
}
