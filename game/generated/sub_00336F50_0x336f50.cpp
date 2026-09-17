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

// Function: sub_00336F50
// Address: 0x336f50 - 0x337190
void sub_00336F50_0x336f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336F50_0x336f50");
#endif

    switch (ctx->pc) {
        case 0x336fa0u: goto label_336fa0;
        case 0x337018u: goto label_337018;
        case 0x337088u: goto label_337088;
        case 0x337120u: goto label_337120;
        default: break;
    }

    ctx->pc = 0x336f50u;

    // 0x336f50: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x336f50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336f54: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x336f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x336f58: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x336f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x336f5c: 0x25260004  addiu       $a2, $t1, 0x4
    ctx->pc = 0x336f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x336f60: 0x2523001c  addiu       $v1, $t1, 0x1C
    ctx->pc = 0x336f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 28));
    // 0x336f64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336f64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336f68: 0x24422520  addiu       $v0, $v0, 0x2520
    ctx->pc = 0x336f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9504));
    // 0x336f6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x336f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x336f70: 0x25280038  addiu       $t0, $t1, 0x38
    ctx->pc = 0x336f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 56));
    // 0x336f74: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x336f74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x336f78: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x336f78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
    // 0x336f7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x336f7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336f80: 0xacc60000  sw          $a2, 0x0($a2)
    ctx->pc = 0x336f80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 6));
    // 0x336f84: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x336f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336f88: 0xacc60004  sw          $a2, 0x4($a2)
    ctx->pc = 0x336f88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 6));
    // 0x336f8c: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x336f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x336f90: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x336f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x336f94: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x336f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
    // 0x336f98: 0xacc40030  sw          $a0, 0x30($a2)
    ctx->pc = 0x336f98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
    // 0x336f9c: 0x0  nop
    ctx->pc = 0x336f9cu;
    // NOP
label_336fa0:
    // 0x336fa0: 0x24a2ffec  addiu       $v0, $a1, -0x14
    ctx->pc = 0x336fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
    // 0x336fa4: 0x24a30014  addiu       $v1, $a1, 0x14
    ctx->pc = 0x336fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x336fa8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x336fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x336fac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x336facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x336fb0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x336fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x336fb4: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x336fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x336fb8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x336fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x336fbc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x336FBCu;
    {
        const bool branch_taken_0x336fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FBCu;
        // 0x336fc0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336fbc) {
            ctx->pc = 0x336FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336fa0;
        }
    }
    ctx->pc = 0x336FC4u;
    // 0x336fc4: 0x24c20018  addiu       $v0, $a2, 0x18
    ctx->pc = 0x336fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x336fc8: 0x25250178  addiu       $a1, $t1, 0x178
    ctx->pc = 0x336fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 376));
    // 0x336fcc: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x336fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x336fd0: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x336fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x336fd4: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x336fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x336fd8: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x336fd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x336fdc: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x336fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x336fe0: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x336fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x336fe4: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x336fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x336fe8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x336fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x336fec: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x336fecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x336ff0: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x336ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x336ff4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x336ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x336ff8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x336ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x336ffc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x336ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x337000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x337000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x337004: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x337004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x337008: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x337008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x33700c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x33700cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x337010: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x337010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x337014: 0x0  nop
    ctx->pc = 0x337014u;
    // NOP
label_337018:
    // 0x337018: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x337018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x33701c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x33701cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x337020: 0x0  nop
    ctx->pc = 0x337020u;
    // NOP
    // 0x337024: 0x0  nop
    ctx->pc = 0x337024u;
    // NOP
    // 0x337028: 0x0  nop
    ctx->pc = 0x337028u;
    // NOP
    // 0x33702c: 0x14eafffa  bne         $a3, $t2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33702Cu;
    {
        const bool branch_taken_0x33702c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x337030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33702Cu;
        // 0x337030: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33702c) {
            ctx->pc = 0x337018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337018;
        }
    }
    ctx->pc = 0x337034u;
    // 0x337034: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x337034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x337038: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x337038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x33703c: 0x252601cc  addiu       $a2, $t1, 0x1CC
    ctx->pc = 0x33703cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 460));
    // 0x337040: 0x252301e0  addiu       $v1, $t1, 0x1E0
    ctx->pc = 0x337040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 480));
    // 0x337044: 0x24842580  addiu       $a0, $a0, 0x2580
    ctx->pc = 0x337044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9600));
    // 0x337048: 0x24422550  addiu       $v0, $v0, 0x2550
    ctx->pc = 0x337048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9552));
    // 0x33704c: 0x252801c8  addiu       $t0, $t1, 0x1C8
    ctx->pc = 0x33704cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 456));
    // 0x337050: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x337050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x337054: 0xad2201bc  sw          $v0, 0x1BC($t1)
    ctx->pc = 0x337054u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 444), GPR_U32(ctx, 2));
    // 0x337058: 0x252b01f8  addiu       $t3, $t1, 0x1F8
    ctx->pc = 0x337058u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 504));
    // 0x33705c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x33705cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x337060: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x337060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337064: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x337064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x337068: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x337068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33706c: 0xacc60000  sw          $a2, 0x0($a2)
    ctx->pc = 0x33706cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 6));
    // 0x337070: 0xacc60004  sw          $a2, 0x4($a2)
    ctx->pc = 0x337070u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 6));
    // 0x337074: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x337074u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x337078: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x337078u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x33707c: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x33707cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
    // 0x337080: 0xacc50028  sw          $a1, 0x28($a2)
    ctx->pc = 0x337080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 5));
    // 0x337084: 0x0  nop
    ctx->pc = 0x337084u;
    // NOP
label_337088:
    // 0x337088: 0x2482fff0  addiu       $v0, $a0, -0x10
    ctx->pc = 0x337088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x33708c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x33708cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x337090: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x337090u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x337094: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x337094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x337098: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x337098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x33709c: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x33709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x3370a0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x3370a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3370a4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3370A4u;
    {
        const bool branch_taken_0x3370a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3370A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3370A4u;
        // 0x3370a8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3370a4) {
            ctx->pc = 0x337088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337088;
        }
    }
    ctx->pc = 0x3370ACu;
    // 0x3370ac: 0x24c20014  addiu       $v0, $a2, 0x14
    ctx->pc = 0x3370acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x3370b0: 0x25070130  addiu       $a3, $t0, 0x130
    ctx->pc = 0x3370b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 304));
    // 0x3370b4: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x3370b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x3370b8: 0x25040144  addiu       $a0, $t0, 0x144
    ctx->pc = 0x3370b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 324));
    // 0x3370bc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3370bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x3370c0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3370c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3370c4: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x3370c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x3370c8: 0x250c015c  addiu       $t4, $t0, 0x15C
    ctx->pc = 0x3370c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 348));
    // 0x3370cc: 0xaccb0004  sw          $t3, 0x4($a2)
    ctx->pc = 0x3370ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 11));
    // 0x3370d0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3370d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3370d4: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x3370d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x3370d8: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x3370d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3370dc: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x3370dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x3370e0: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x3370e0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x3370e4: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x3370e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3370e8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3370e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3370ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3370ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3370f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3370f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3370f4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3370f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3370f8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3370f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3370fc: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x3370fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x337100: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x337100u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x337104: 0xace70000  sw          $a3, 0x0($a3)
    ctx->pc = 0x337104u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 7));
    // 0x337108: 0xace70004  sw          $a3, 0x4($a3)
    ctx->pc = 0x337108u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 7));
    // 0x33710c: 0xac840004  sw          $a0, 0x4($a0)
    ctx->pc = 0x33710cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
    // 0x337110: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x337110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x337114: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x337114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x337118: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x337118u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x33711c: 0x0  nop
    ctx->pc = 0x33711cu;
    // NOP
label_337120:
    // 0x337120: 0x2502fff0  addiu       $v0, $t0, -0x10
    ctx->pc = 0x337120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
    // 0x337124: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x337124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x337128: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x337128u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x33712c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x33712cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x337130: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x337130u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x337134: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x337134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x337138: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x337138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x33713c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33713Cu;
    {
        const bool branch_taken_0x33713c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33713Cu;
        // 0x337140: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33713c) {
            ctx->pc = 0x337120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337120;
        }
    }
    ctx->pc = 0x337144u;
    // 0x337144: 0x24e20014  addiu       $v0, $a3, 0x14
    ctx->pc = 0x337144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x337148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x337148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33714c: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x33714cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x337150: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x337150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337154: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x337154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x337158: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x337158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x33715c: 0xacec0004  sw          $t4, 0x4($a3)
    ctx->pc = 0x33715cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 12));
    // 0x337160: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x337160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x337164: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x337164u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x337168: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x337168u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x33716c: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x33716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x337170: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x337170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x337174: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x337174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x337178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x337178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33717c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x33717cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x337180: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x337180u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x337184: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x337184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x337188: 0x80cdc64  j           func_337190
    ctx->pc = 0x337188u;
    ctx->pc = 0x33718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337188u;
    // 0x33718c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337190u;
    sub_00337190_0x337190(rdram, ctx, runtime); return;
    ctx->pc = 0x337190u;
}
