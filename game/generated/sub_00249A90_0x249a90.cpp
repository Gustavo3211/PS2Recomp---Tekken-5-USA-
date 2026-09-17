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

// Function: sub_00249A90
// Address: 0x249a90 - 0x249b08
void sub_00249A90_0x249a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249A90_0x249a90");
#endif

    switch (ctx->pc) {
        case 0x249a90u: goto label_249a90;
        case 0x249a94u: goto label_249a94;
        case 0x249a98u: goto label_249a98;
        case 0x249a9cu: goto label_249a9c;
        case 0x249aa0u: goto label_249aa0;
        case 0x249aa4u: goto label_249aa4;
        case 0x249aa8u: goto label_249aa8;
        case 0x249aacu: goto label_249aac;
        case 0x249ab0u: goto label_249ab0;
        case 0x249ab4u: goto label_249ab4;
        case 0x249ab8u: goto label_249ab8;
        case 0x249abcu: goto label_249abc;
        case 0x249ac0u: goto label_249ac0;
        case 0x249ac4u: goto label_249ac4;
        case 0x249ac8u: goto label_249ac8;
        case 0x249accu: goto label_249acc;
        case 0x249ad0u: goto label_249ad0;
        case 0x249ad4u: goto label_249ad4;
        case 0x249ad8u: goto label_249ad8;
        case 0x249adcu: goto label_249adc;
        case 0x249ae0u: goto label_249ae0;
        case 0x249ae4u: goto label_249ae4;
        case 0x249ae8u: goto label_249ae8;
        case 0x249aecu: goto label_249aec;
        case 0x249af0u: goto label_249af0;
        case 0x249af4u: goto label_249af4;
        case 0x249af8u: goto label_249af8;
        case 0x249afcu: goto label_249afc;
        case 0x249b00u: goto label_249b00;
        case 0x249b04u: goto label_249b04;
        default: break;
    }

    ctx->pc = 0x249a90u;

label_249a90:
    // 0x249a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x249a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_249a94:
    // 0x249a94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x249a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_249a98:
    // 0x249a98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_249a9c:
    // 0x249a9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_249aa0:
    // 0x249aa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x249aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_249aa4:
    // 0x249aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x249aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_249aa8:
    // 0x249aa8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x249aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_249aac:
    // 0x249aac: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x249aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_249ab0:
    // 0x249ab0: 0x24a20002  addiu       $v0, $a1, 0x2
    ctx->pc = 0x249ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_249ab4:
    // 0x249ab4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x249ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_249ab8:
    // 0x249ab8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_249abc:
    if (ctx->pc == 0x249ABCu) {
        ctx->pc = 0x249ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AB8u;
        // 0x249abc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AC0u;
        goto label_249ac0;
    }
    ctx->pc = 0x249AB8u;
    {
        const bool branch_taken_0x249ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249ab8) {
            ctx->pc = 0x249ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249AB8u;
            // 0x249abc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249AF8u;
            goto label_249af8;
        }
    }
    ctx->pc = 0x249AC0u;
label_249ac0:
    // 0x249ac0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x249ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_249ac4:
    // 0x249ac4: 0x2411fffe  addiu       $s1, $zero, -0x2
    ctx->pc = 0x249ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_249ac8:
    // 0x249ac8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x249ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_249acc:
    // 0x249acc: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x249accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_249ad0:
    // 0x249ad0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_249ad4:
    if (ctx->pc == 0x249AD4u) {
        ctx->pc = 0x249AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AD0u;
        // 0x249ad4: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AD8u;
        goto label_249ad8;
    }
    ctx->pc = 0x249AD0u;
    {
        const bool branch_taken_0x249ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AD0u;
        // 0x249ad4: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ad0) {
            ctx->pc = 0x249AF4u;
            goto label_249af4;
        }
    }
    ctx->pc = 0x249AD8u;
label_249ad8:
    // 0x249ad8: 0x40f809  jalr        $v0
label_249adc:
    if (ctx->pc == 0x249ADCu) {
        ctx->pc = 0x249AE0u;
        goto label_249ae0;
    }
    ctx->pc = 0x249AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249AE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249AD8u, 0x249AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x249AE0u;
label_249ae0:
    // 0x249ae0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_249ae4:
    if (ctx->pc == 0x249AE4u) {
        ctx->pc = 0x249AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249AE0u;
        // 0x249ae4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249AE8u;
        goto label_249ae8;
    }
    ctx->pc = 0x249AE0u;
    {
        const bool branch_taken_0x249ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249ae0) {
            ctx->pc = 0x249AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249AE0u;
            // 0x249ae4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249AF8u;
            goto label_249af8;
        }
    }
    ctx->pc = 0x249AE8u;
label_249ae8:
    // 0x249ae8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x249ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_249aec:
    // 0x249aec: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x249aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_249af0:
    // 0x249af0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x249af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_249af4:
    // 0x249af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249af8:
    // 0x249af8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_249afc:
    // 0x249afc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_249b00:
    // 0x249b00: 0x3e00008  jr          $ra
label_249b04:
    if (ctx->pc == 0x249B04u) {
        ctx->pc = 0x249B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B00u;
        // 0x249b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249B08u;
        goto label_fallthrough_0x249b00;
    }
    ctx->pc = 0x249B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249B00u;
        // 0x249b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x249b00:
    ctx->pc = 0x249B08u;
}
