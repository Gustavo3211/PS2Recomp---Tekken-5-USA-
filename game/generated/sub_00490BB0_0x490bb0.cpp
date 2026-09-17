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

// Function: sub_00490BB0
// Address: 0x490bb0 - 0x490ca8
void sub_00490BB0_0x490bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00490BB0_0x490bb0");
#endif

    switch (ctx->pc) {
        case 0x490c28u: goto label_490c28;
        case 0x490c5cu: goto label_490c5c;
        default: break;
    }

    ctx->pc = 0x490bb0u;

    // 0x490bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x490bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x490bb4: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x490bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x490bb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x490bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x490bbc: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x490bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x490bc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x490bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x490bc4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x490bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x490bc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x490bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x490bcc: 0x246314c0  addiu       $v1, $v1, 0x14C0
    ctx->pc = 0x490bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5312));
    // 0x490bd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x490bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x490bd4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x490bd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x490bd8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x490bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x490bdc: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x490bdcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x490be0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x490be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x490be4: 0x3c15007e  lui         $s5, 0x7E
    ctx->pc = 0x490be4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)126 << 16));
    // 0x490be8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x490be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x490bec: 0x3c16007e  lui         $s6, 0x7E
    ctx->pc = 0x490becu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)126 << 16));
    // 0x490bf0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x490bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x490bf4: 0x3c17007e  lui         $s7, 0x7E
    ctx->pc = 0x490bf4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)126 << 16));
    // 0x490bf8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x490bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x490bfc: 0x3c1e0073  lui         $fp, 0x73
    ctx->pc = 0x490bfcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)115 << 16));
    // 0x490c00: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x490c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x490c04: 0x27c4d680  addiu       $a0, $fp, -0x2980
    ctx->pc = 0x490c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956672));
    // 0x490c08: 0x24427850  addiu       $v0, $v0, 0x7850
    ctx->pc = 0x490c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30800));
    // 0x490c0c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x490c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490c10: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x490c10u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x72D6E4u));
    // 0x490c14: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x490c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x490c18: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x490c18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E14C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14C0u, _value); } while (0);
    // 0x490c1c: 0x249214dc  addiu       $s2, $a0, 0x14DC
    ctx->pc = 0x490c1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 5340));
    // 0x490c20: 0xaee514bc  sw          $a1, 0x14BC($s7)
    ctx->pc = 0x490c20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7E14BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14BCu, _value); } while (0);
    // 0x490c24: 0x0  nop
    ctx->pc = 0x490c24u;
    // NOP
label_490c28:
    // 0x490c28: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x490c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x490c2c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x490c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x490c30: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x490c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x490c34: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x490c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x490c38: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x490c38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x490c3c: 0xaec214d8  sw          $v0, 0x14D8($s6)
    ctx->pc = 0x490c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 5336), GPR_U32(ctx, 2));
    // 0x490c40: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x490c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x490c44: 0xaea314c4  sw          $v1, 0x14C4($s5)
    ctx->pc = 0x490c44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 5316), GPR_U32(ctx, 3));
    // 0x490c48: 0x84a2000c  lh          $v0, 0xC($a1)
    ctx->pc = 0x490c48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x490c4c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x490c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x490c50: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x490c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x490c54: 0xc1240be  jal         func_4902F8
    ctx->pc = 0x490C54u;
    SET_GPR_U32(ctx, 31, 0x490C5Cu);
    ctx->pc = 0x490C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490C54u;
    // 0x490c58: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4902F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4902F8u, 0x490C54u, 0x490C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490C5Cu;
label_490c5c:
    // 0x490c5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x490c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x490c60: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x490c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x490c64: 0x1613fff0  bne         $s0, $s3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x490C64u;
    {
        const bool branch_taken_0x490c64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        ctx->pc = 0x490C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490C64u;
        // 0x490c68: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x490c64) {
            ctx->pc = 0x490C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_490c28;
        }
    }
    ctx->pc = 0x490C6Cu;
    // 0x490c6c: 0x8ee314bc  lw          $v1, 0x14BC($s7)
    ctx->pc = 0x490c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 5308)));
    // 0x490c70: 0x27c2d680  addiu       $v0, $fp, -0x2980
    ctx->pc = 0x490c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294956672));
    // 0x490c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x490c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x490c78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x490c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x490c7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x490c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490c80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x490c80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x490c84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x490c84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x490c88: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x490c88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x490c8c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x490c8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x490c90: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x490c90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x490c94: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x490c94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x490c98: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x490c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x490c9c: 0xac430064  sw          $v1, 0x64($v0)
    ctx->pc = 0x490c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
    // 0x490ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x490CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x490CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490CA0u;
        // 0x490ca4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x490CA8u;
}
