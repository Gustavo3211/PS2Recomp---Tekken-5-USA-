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

// Function: sub_0033ABC8
// Address: 0x33abc8 - 0x33ac38
void sub_0033ABC8_0x33abc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033ABC8_0x33abc8");
#endif

    switch (ctx->pc) {
        case 0x33abc8u: goto label_33abc8;
        case 0x33abccu: goto label_33abcc;
        case 0x33abd0u: goto label_33abd0;
        case 0x33abd4u: goto label_33abd4;
        case 0x33abd8u: goto label_33abd8;
        case 0x33abdcu: goto label_33abdc;
        case 0x33abe0u: goto label_33abe0;
        case 0x33abe4u: goto label_33abe4;
        case 0x33abe8u: goto label_33abe8;
        case 0x33abecu: goto label_33abec;
        case 0x33abf0u: goto label_33abf0;
        case 0x33abf4u: goto label_33abf4;
        case 0x33abf8u: goto label_33abf8;
        case 0x33abfcu: goto label_33abfc;
        case 0x33ac00u: goto label_33ac00;
        case 0x33ac04u: goto label_33ac04;
        case 0x33ac08u: goto label_33ac08;
        case 0x33ac0cu: goto label_33ac0c;
        case 0x33ac10u: goto label_33ac10;
        case 0x33ac14u: goto label_33ac14;
        case 0x33ac18u: goto label_33ac18;
        case 0x33ac1cu: goto label_33ac1c;
        case 0x33ac20u: goto label_33ac20;
        case 0x33ac24u: goto label_33ac24;
        case 0x33ac28u: goto label_33ac28;
        case 0x33ac2cu: goto label_33ac2c;
        case 0x33ac30u: goto label_33ac30;
        case 0x33ac34u: goto label_33ac34;
        default: break;
    }

    ctx->pc = 0x33abc8u;

label_33abc8:
    // 0x33abc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33abc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33abcc:
    // 0x33abcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33abccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33abd0:
    // 0x33abd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33abd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33abd4:
    // 0x33abd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33abd8:
    // 0x33abd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33abd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33abdc:
    // 0x33abdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_33abe0:
    // 0x33abe0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x33abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33abe4:
    // 0x33abe4: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x33abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
label_33abe8:
    // 0x33abe8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33abe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33abec:
    // 0x33abec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33abecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33abf0:
    // 0x33abf0: 0x40f809  jalr        $v0
label_33abf4:
    if (ctx->pc == 0x33ABF4u) {
        ctx->pc = 0x33ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABF0u;
        // 0x33abf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33ABF8u;
        goto label_33abf8;
    }
    ctx->pc = 0x33ABF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33ABF8u);
        ctx->pc = 0x33ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABF0u;
        // 0x33abf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33ABF0u, 0x33ABF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33ABF8u;
label_33abf8:
    // 0x33abf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33abf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33abfc:
    // 0x33abfc: 0xc0cb0da  jal         func_32C368
label_33ac00:
    if (ctx->pc == 0x33AC00u) {
        ctx->pc = 0x33AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33ABFCu;
        // 0x33ac00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC04u;
        goto label_33ac04;
    }
    ctx->pc = 0x33ABFCu;
    SET_GPR_U32(ctx, 31, 0x33AC04u);
    ctx->pc = 0x33AC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33ABFCu;
    // 0x33ac00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C368u, 0x33ABFCu, 0x33AC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AC04u;
label_33ac04:
    // 0x33ac04: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33ac08:
    // 0x33ac08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33ac08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33ac0c:
    // 0x33ac0c: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x33ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_33ac10:
    // 0x33ac10: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33ac10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33ac14:
    // 0x33ac14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33ac14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33ac18:
    // 0x33ac18: 0x60f809  jalr        $v1
label_33ac1c:
    if (ctx->pc == 0x33AC1Cu) {
        ctx->pc = 0x33AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC18u;
        // 0x33ac1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC20u;
        goto label_33ac20;
    }
    ctx->pc = 0x33AC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33AC20u);
        ctx->pc = 0x33AC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC18u;
        // 0x33ac1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AC18u, 0x33AC20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33AC20u;
label_33ac20:
    // 0x33ac20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33ac20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33ac24:
    // 0x33ac24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33ac24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33ac28:
    // 0x33ac28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33ac28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33ac2c:
    // 0x33ac2c: 0x3e00008  jr          $ra
label_33ac30:
    if (ctx->pc == 0x33AC30u) {
        ctx->pc = 0x33AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC2Cu;
        // 0x33ac30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33AC34u;
        goto label_33ac34;
    }
    ctx->pc = 0x33AC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AC2Cu;
        // 0x33ac30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AC34u;
label_33ac34:
    // 0x33ac34: 0x0  nop
    ctx->pc = 0x33ac34u;
    // NOP
    ctx->pc = 0x33ac38u;
}
