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

// Function: sub_0033DF60
// Address: 0x33df60 - 0x33e050
void sub_0033DF60_0x33df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DF60_0x33df60");
#endif

    switch (ctx->pc) {
        case 0x33dfd8u: goto label_33dfd8;
        default: break;
    }

    ctx->pc = 0x33df60u;

    // 0x33df60: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x33df60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x33df64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x33df64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x33df68: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x33df68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x33df6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33df6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33df70: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x33df70u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33df74: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x33df74u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x33df78: 0x61180  sll         $v0, $a2, 6
    ctx->pc = 0x33df78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x33df7c: 0x54902  srl         $t1, $a1, 4
    ctx->pc = 0x33df7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x33df80: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x33df80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x33df84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x33df84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33df88: 0x11200026  beqz        $t1, . + 4 + (0x26 << 2)
    ctx->pc = 0x33DF88u;
    {
        const bool branch_taken_0x33df88 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF88u;
        // 0x33df8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df88) {
            ctx->pc = 0x33E024u;
            goto label_33e024;
        }
    }
    ctx->pc = 0x33DF90u;
    // 0x33df90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33df90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33df94: 0x6283c  dsll32      $a1, $a2, 0
    ctx->pc = 0x33df94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 0));
    // 0x33df98: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x33df98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33df9c: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x33df9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x33dfa0: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x33dfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x33dfa4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x33dfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x33dfa8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x33dfa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x33dfac: 0x445825  or          $t3, $v0, $a0
    ctx->pc = 0x33dfacu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x33dfb0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x33dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x33dfb4: 0x34840005  ori         $a0, $a0, 0x5
    ctx->pc = 0x33dfb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
    // 0x33dfb8: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x33dfb8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x33dfbc: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x33dfbcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x33dfc0: 0x35ef0003  ori         $t7, $t7, 0x3
    ctx->pc = 0x33dfc0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)3);
    // 0x33dfc4: 0x240e000e  addiu       $t6, $zero, 0xE
    ctx->pc = 0x33dfc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x33dfc8: 0x240d0051  addiu       $t5, $zero, 0x51
    ctx->pc = 0x33dfc8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x33dfcc: 0x240c0052  addiu       $t4, $zero, 0x52
    ctx->pc = 0x33dfccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x33dfd0: 0x24060053  addiu       $a2, $zero, 0x53
    ctx->pc = 0x33dfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x33dfd4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33dfd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33dfd8:
    // 0x33dfd8: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33DFD8u;
    {
        const bool branch_taken_0x33dfd8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DFD8u;
        // 0x33dfdc: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dfd8) {
            ctx->pc = 0x33DFE8u;
            goto label_33dfe8;
        }
    }
    ctx->pc = 0x33DFE0u;
    // 0x33dfe0: 0xfcef0000  sd          $t7, 0x0($a3)
    ctx->pc = 0x33dfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 15));
    // 0x33dfe4: 0xfcee0008  sd          $t6, 0x8($a3)
    ctx->pc = 0x33dfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 14));
label_33dfe8:
    // 0x33dfe8: 0xfced0018  sd          $t5, 0x18($a3)
    ctx->pc = 0x33dfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 13));
    // 0x33dfec: 0xfce20010  sd          $v0, 0x10($a3)
    ctx->pc = 0x33dfecu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 2));
    // 0x33dff0: 0xfce50020  sd          $a1, 0x20($a3)
    ctx->pc = 0x33dff0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 5));
    // 0x33dff4: 0xfcec0028  sd          $t4, 0x28($a3)
    ctx->pc = 0x33dff4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 40), GPR_U64(ctx, 12));
    // 0x33dff8: 0xfce00030  sd          $zero, 0x30($a3)
    ctx->pc = 0x33dff8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 48), GPR_U64(ctx, 0));
    // 0x33dffc: 0xfce60038  sd          $a2, 0x38($a3)
    ctx->pc = 0x33dffcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 6));
    // 0x33e000: 0xfceb0040  sd          $t3, 0x40($a3)
    ctx->pc = 0x33e000u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 64), GPR_U64(ctx, 11));
    // 0x33e004: 0xfce00048  sd          $zero, 0x48($a3)
    ctx->pc = 0x33e004u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 72), GPR_U64(ctx, 0));
    // 0x33e008: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x33e008u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x33e00c: 0x7ce40060  sq          $a0, 0x60($a3)
    ctx->pc = 0x33e00cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 96), GPR_VEC(ctx, 4));
    // 0x33e010: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33e010u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x33e014: 0x24e70070  addiu       $a3, $a3, 0x70
    ctx->pc = 0x33e014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 112));
    // 0x33e018: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x33e018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x33e01c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x33E01Cu;
    {
        const bool branch_taken_0x33e01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E01Cu;
        // 0x33e020: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e01c) {
            ctx->pc = 0x33DFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33dfd8;
        }
    }
    ctx->pc = 0x33E024u;
label_33e024:
    // 0x33e024: 0x24e5ff90  addiu       $a1, $a3, -0x70
    ctx->pc = 0x33e024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967184));
    // 0x33e028: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x33e028u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x33e02c: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x33e02cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x33e030: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x33e030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x33e034: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33e034u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e038: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33e038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x33e03c: 0xfca20040  sd          $v0, 0x40($a1)
    ctx->pc = 0x33e03cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 64), GPR_U64(ctx, 2));
    // 0x33e040: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x33e040u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x33e044: 0x7ce4fff0  sq          $a0, -0x10($a3)
    ctx->pc = 0x33e044u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 4294967280), GPR_VEC(ctx, 4));
    // 0x33e048: 0x3e00008  jr          $ra
    ctx->pc = 0x33E048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E050u;
}
