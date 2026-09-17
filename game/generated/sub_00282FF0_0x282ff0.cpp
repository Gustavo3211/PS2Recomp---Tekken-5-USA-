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

// Function: sub_00282FF0
// Address: 0x282ff0 - 0x283180
void sub_00282FF0_0x282ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282FF0_0x282ff0");
#endif

    switch (ctx->pc) {
        case 0x283024u: goto label_283024;
        default: break;
    }

    ctx->pc = 0x282ff0u;

    // 0x282ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x282ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x282ff4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x282ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282ff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x282ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ffc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x282ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x283000: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x283000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x283004: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x283004u;
    {
        const bool branch_taken_0x283004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283004u;
        // 0x283008: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283004) {
            ctx->pc = 0x283014u;
            goto label_283014;
        }
    }
    ctx->pc = 0x28300Cu;
    // 0x28300c: 0x920201bc  lbu         $v0, 0x1BC($s0)
    ctx->pc = 0x28300cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x283010: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x283010u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_283014:
    // 0x283014: 0x50600057  beql        $v1, $zero, . + 4 + (0x57 << 2)
    ctx->pc = 0x283014u;
    {
        const bool branch_taken_0x283014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x283014) {
            ctx->pc = 0x283018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283014u;
            // 0x283018: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283174u;
            goto label_283174;
        }
    }
    ctx->pc = 0x28301Cu;
    // 0x28301c: 0xc09d940  jal         func_276500
    ctx->pc = 0x28301Cu;
    SET_GPR_U32(ctx, 31, 0x283024u);
    ctx->pc = 0x276500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276500u, 0x28301Cu, 0x283024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283024u;
label_283024:
    // 0x283024: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x283024u;
    {
        const bool branch_taken_0x283024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283024) {
            ctx->pc = 0x283028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283024u;
            // 0x283028: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283174u;
            goto label_283174;
        }
    }
    ctx->pc = 0x28302Cu;
    // 0x28302c: 0x9602003c  lhu         $v0, 0x3C($s0)
    ctx->pc = 0x28302cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x283030: 0x8f84ca8c  lw          $a0, -0x3574($gp)
    ctx->pc = 0x283030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953612)));
    // 0x283034: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x283034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x283038: 0x92050191  lbu         $a1, 0x191($s0)
    ctx->pc = 0x283038u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 401)));
    // 0x28303c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x283040: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x283040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x283044: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x283044u;
    {
        const bool branch_taken_0x283044 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x283048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283044u;
        // 0x283048: 0x833021  addu        $a2, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283044) {
            ctx->pc = 0x283124u;
            goto label_283124;
        }
    }
    ctx->pc = 0x28304Cu;
    // 0x28304c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28304cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283050: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x283050u;
    {
        const bool branch_taken_0x283050 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x283054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283050u;
        // 0x283054: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283050) {
            ctx->pc = 0x283098u;
            goto label_283098;
        }
    }
    ctx->pc = 0x283058u;
    // 0x283058: 0x8cc30154  lw          $v1, 0x154($a2)
    ctx->pc = 0x283058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 340)));
    // 0x28305c: 0x2c62ffff  sltiu       $v0, $v1, -0x1
    ctx->pc = 0x28305cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x283060: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x283060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x283064: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x283064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x283068: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x283068u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x28306c: 0xacc30154  sw          $v1, 0x154($a2)
    ctx->pc = 0x28306cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 340), GPR_U32(ctx, 3));
    // 0x283070: 0x92020192  lbu         $v0, 0x192($s0)
    ctx->pc = 0x283070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 402)));
    // 0x283074: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x283074u;
    {
        const bool branch_taken_0x283074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283074) {
            ctx->pc = 0x283078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283074u;
            // 0x283078: 0x86030178  lh          $v1, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283128u;
            goto label_283128;
        }
    }
    ctx->pc = 0x28307Cu;
    // 0x28307c: 0x8cc20160  lw          $v0, 0x160($a2)
    ctx->pc = 0x28307cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x283080: 0x2c43ffff  sltiu       $v1, $v0, -0x1
    ctx->pc = 0x283080u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x283084: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x283084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283088: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x283088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x28308c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x28308cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x283090: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x283090u;
    {
        const bool branch_taken_0x283090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283090u;
        // 0x283094: 0xacc20160  sw          $v0, 0x160($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283090) {
            ctx->pc = 0x283124u;
            goto label_283124;
        }
    }
    ctx->pc = 0x283098u;
label_283098:
    // 0x283098: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x283098u;
    {
        const bool branch_taken_0x283098 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283098u;
        // 0x28309c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283098) {
            ctx->pc = 0x2830E0u;
            goto label_2830e0;
        }
    }
    ctx->pc = 0x2830A0u;
    // 0x2830a0: 0x8cc30158  lw          $v1, 0x158($a2)
    ctx->pc = 0x2830a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 344)));
    // 0x2830a4: 0x2c62ffff  sltiu       $v0, $v1, -0x1
    ctx->pc = 0x2830a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x2830a8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2830a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2830ac: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2830acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2830b0: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2830b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2830b4: 0xacc30158  sw          $v1, 0x158($a2)
    ctx->pc = 0x2830b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 344), GPR_U32(ctx, 3));
    // 0x2830b8: 0x92020192  lbu         $v0, 0x192($s0)
    ctx->pc = 0x2830b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 402)));
    // 0x2830bc: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2830BCu;
    {
        const bool branch_taken_0x2830bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2830bc) {
            ctx->pc = 0x2830C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2830BCu;
            // 0x2830c0: 0x86030178  lh          $v1, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283128u;
            goto label_283128;
        }
    }
    ctx->pc = 0x2830C4u;
    // 0x2830c4: 0x8cc20164  lw          $v0, 0x164($a2)
    ctx->pc = 0x2830c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 356)));
    // 0x2830c8: 0x2c43ffff  sltiu       $v1, $v0, -0x1
    ctx->pc = 0x2830c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x2830cc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2830ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2830d0: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x2830d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x2830d4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2830d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2830d8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2830D8u;
    {
        const bool branch_taken_0x2830d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2830DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2830D8u;
        // 0x2830dc: 0xacc20164  sw          $v0, 0x164($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2830d8) {
            ctx->pc = 0x283124u;
            goto label_283124;
        }
    }
    ctx->pc = 0x2830E0u;
label_2830e0:
    // 0x2830e0: 0x54a20011  bnel        $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2830E0u;
    {
        const bool branch_taken_0x2830e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2830e0) {
            ctx->pc = 0x2830E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2830E0u;
            // 0x2830e4: 0x86030178  lh          $v1, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283128u;
            goto label_283128;
        }
    }
    ctx->pc = 0x2830E8u;
    // 0x2830e8: 0x8cc3015c  lw          $v1, 0x15C($a2)
    ctx->pc = 0x2830e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 348)));
    // 0x2830ec: 0x2c62ffff  sltiu       $v0, $v1, -0x1
    ctx->pc = 0x2830ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x2830f0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x2830f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2830f4: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x2830f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x2830f8: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x2830f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2830fc: 0xacc3015c  sw          $v1, 0x15C($a2)
    ctx->pc = 0x2830fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 348), GPR_U32(ctx, 3));
    // 0x283100: 0x92020192  lbu         $v0, 0x192($s0)
    ctx->pc = 0x283100u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 402)));
    // 0x283104: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x283104u;
    {
        const bool branch_taken_0x283104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283104) {
            ctx->pc = 0x283108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283104u;
            // 0x283108: 0x86030178  lh          $v1, 0x178($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 376)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283128u;
            goto label_283128;
        }
    }
    ctx->pc = 0x28310Cu;
    // 0x28310c: 0x8cc20168  lw          $v0, 0x168($a2)
    ctx->pc = 0x28310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 360)));
    // 0x283110: 0x2c43ffff  sltiu       $v1, $v0, -0x1
    ctx->pc = 0x283110u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x283114: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x283114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283118: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x283118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x28311c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x28311cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x283120: 0xacc20168  sw          $v0, 0x168($a2)
    ctx->pc = 0x283120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 360), GPR_U32(ctx, 2));
label_283124:
    // 0x283124: 0x86030178  lh          $v1, 0x178($s0)
    ctx->pc = 0x283124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 376)));
label_283128:
    // 0x283128: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x283128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28312c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28312Cu;
    {
        const bool branch_taken_0x28312c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x283130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28312Cu;
        // 0x283130: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28312c) {
            ctx->pc = 0x283170u;
            goto label_283170;
        }
    }
    ctx->pc = 0x283134u;
    // 0x283134: 0x8cc3016c  lw          $v1, 0x16C($a2)
    ctx->pc = 0x283134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 364)));
    // 0x283138: 0x2c62ffff  sltiu       $v0, $v1, -0x1
    ctx->pc = 0x283138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x28313c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x28313cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x283140: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x283140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x283144: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x283144u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x283148: 0xacc3016c  sw          $v1, 0x16C($a2)
    ctx->pc = 0x283148u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 364), GPR_U32(ctx, 3));
    // 0x28314c: 0x86020178  lh          $v0, 0x178($s0)
    ctx->pc = 0x28314cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x283150: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x283150u;
    {
        const bool branch_taken_0x283150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x283154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283150u;
        // 0x283154: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283150) {
            ctx->pc = 0x283174u;
            goto label_283174;
        }
    }
    ctx->pc = 0x283158u;
    // 0x283158: 0x8cc20170  lw          $v0, 0x170($a2)
    ctx->pc = 0x283158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 368)));
    // 0x28315c: 0x2c43ffff  sltiu       $v1, $v0, -0x1
    ctx->pc = 0x28315cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x283160: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x283160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x283164: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x283164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x283168: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x283168u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x28316c: 0xacc20170  sw          $v0, 0x170($a2)
    ctx->pc = 0x28316cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 368), GPR_U32(ctx, 2));
label_283170:
    // 0x283170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x283170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_283174:
    // 0x283174: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x283174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x283178: 0x3e00008  jr          $ra
    ctx->pc = 0x283178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283178u;
        // 0x28317c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283180u;
}
