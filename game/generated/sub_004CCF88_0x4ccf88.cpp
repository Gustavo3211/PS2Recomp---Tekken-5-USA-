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

// Function: sub_004CCF88
// Address: 0x4ccf88 - 0x4cd050
void sub_004CCF88_0x4ccf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CCF88_0x4ccf88");
#endif

    switch (ctx->pc) {
        case 0x4ccff8u: goto label_4ccff8;
        default: break;
    }

    ctx->pc = 0x4ccf88u;

    // 0x4ccf88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ccf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ccf8c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ccf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ccf90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ccf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ccf94: 0x24a50f60  addiu       $a1, $a1, 0xF60
    ctx->pc = 0x4ccf94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
    // 0x4ccf98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ccf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ccf9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ccf9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ccfa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ccfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ccfa4: 0x2630015e  addiu       $s0, $s1, 0x15E
    ctx->pc = 0x4ccfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 350));
    // 0x4ccfa8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ccfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4ccfac: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ccfacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ccfb0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ccfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4ccfb4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ccfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ccfb8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ccfb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ccfbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ccfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ccfc0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ccfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ccfc4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ccfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ccfc8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ccfc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ccfcc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4ccfccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4ccfd0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ccfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ccfd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ccfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ccfd8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ccfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ccfdc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ccfdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ccfe0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CCFE0u;
    {
        const bool branch_taken_0x4ccfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ccfe0) {
            ctx->pc = 0x4CCFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CCFE0u;
            // 0x4ccfe4: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CCFFCu;
            goto label_4ccffc;
        }
    }
    ctx->pc = 0x4CCFE8u;
    // 0x4ccfe8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ccfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4ccfec: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4ccfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4ccff0: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4CCFF0u;
    SET_GPR_U32(ctx, 31, 0x4CCFF8u);
    ctx->pc = 0x4CCFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CCFF0u;
    // 0x4ccff4: 0xa462f9ac  sh          $v0, -0x654($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294965676), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4CCFF0u, 0x4CCFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CCFF8u;
label_4ccff8:
    // 0x4ccff8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ccff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4ccffc:
    // 0x4ccffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ccffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4cd000: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4cd000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4cd004: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x4cd004u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4cd008: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CD008u;
    {
        const bool branch_taken_0x4cd008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD008u;
        // 0x4cd00c: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd008) {
            ctx->pc = 0x4CD028u;
            goto label_4cd028;
        }
    }
    ctx->pc = 0x4CD010u;
    // 0x4cd010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cd010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cd014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd018: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd01c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cd01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cd020: 0x8133414  j           func_4CD050
    ctx->pc = 0x4CD020u;
    ctx->pc = 0x4CD024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD020u;
    // 0x4cd024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD050u;
    sub_004CD050_0x4cd050(rdram, ctx, runtime); return;
    ctx->pc = 0x4CD028u;
label_4cd028:
    // 0x4cd028: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4cd028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4cd02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cd02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd030: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4cd030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cd034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cd038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd03c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cd040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cd040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cd044: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4cd044u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cd048: 0x8133414  j           func_4CD050
    ctx->pc = 0x4CD048u;
    ctx->pc = 0x4CD04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CD048u;
    // 0x4cd04c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD050u;
    sub_004CD050_0x4cd050(rdram, ctx, runtime); return;
    ctx->pc = 0x4CD050u;
}
