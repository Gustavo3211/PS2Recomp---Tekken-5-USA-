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

// Function: sub_004CBEF8
// Address: 0x4cbef8 - 0x4cbfc0
void sub_004CBEF8_0x4cbef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CBEF8_0x4cbef8");
#endif

    switch (ctx->pc) {
        case 0x4cbf68u: goto label_4cbf68;
        default: break;
    }

    ctx->pc = 0x4cbef8u;

    // 0x4cbef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cbef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4cbefc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cbefcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cbf00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cbf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cbf04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cbf04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbf08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cbf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cbf0c: 0x2611015e  addiu       $s1, $s0, 0x15E
    ctx->pc = 0x4cbf0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4cbf10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cbf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4cbf14: 0x24a50f60  addiu       $a1, $a1, 0xF60
    ctx->pc = 0x4cbf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
    // 0x4cbf18: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4cbf18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4cbf1c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4cbf1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cbf20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4cbf20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4cbf24: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4cbf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4cbf28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cbf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cbf2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cbf2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cbf30: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4cbf30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4cbf34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cbf34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cbf38: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4cbf38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cbf3c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4cbf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4cbf40: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4cbf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4cbf44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cbf44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cbf48: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4cbf48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4cbf4c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4cbf4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cbf50: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CBF50u;
    {
        const bool branch_taken_0x4cbf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cbf50) {
            ctx->pc = 0x4CBF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CBF50u;
            // 0x4cbf54: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CBF6Cu;
            goto label_4cbf6c;
        }
    }
    ctx->pc = 0x4CBF58u;
    // 0x4cbf58: 0x96030164  lhu         $v1, 0x164($s0)
    ctx->pc = 0x4cbf58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x4cbf5c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4cbf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4cbf60: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4CBF60u;
    SET_GPR_U32(ctx, 31, 0x4CBF68u);
    ctx->pc = 0x4CBF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBF60u;
    // 0x4cbf64: 0xa443f9ac  sh          $v1, -0x654($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294965676), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4CBF60u, 0x4CBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CBF68u;
label_4cbf68:
    // 0x4cbf68: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4cbf68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4cbf6c:
    // 0x4cbf6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4cbf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4cbf70: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4cbf70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4cbf74: 0x2c630010  sltiu       $v1, $v1, 0x10
    ctx->pc = 0x4cbf74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4cbf78: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CBF78u;
    {
        const bool branch_taken_0x4cbf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CBF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CBF78u;
        // 0x4cbf7c: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cbf78) {
            ctx->pc = 0x4CBF98u;
            goto label_4cbf98;
        }
    }
    ctx->pc = 0x4CBF80u;
    // 0x4cbf80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cbf80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbf84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cbf84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cbf88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cbf88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cbf8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cbf8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cbf90: 0x8132ff0  j           func_4CBFC0
    ctx->pc = 0x4CBF90u;
    ctx->pc = 0x4CBF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBF90u;
    // 0x4cbf94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CBFC0u;
    sub_004CBFC0_0x4cbfc0(rdram, ctx, runtime); return;
    ctx->pc = 0x4CBF98u;
label_4cbf98:
    // 0x4cbf98: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4cbf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4cbf9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cbf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cbfa0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4cbfa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cbfa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cbfa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cbfa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cbfa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cbfac: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cbfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cbfb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cbfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cbfb4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4cbfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cbfb8: 0x8132ff0  j           func_4CBFC0
    ctx->pc = 0x4CBFB8u;
    ctx->pc = 0x4CBFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CBFB8u;
    // 0x4cbfbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CBFC0u;
    sub_004CBFC0_0x4cbfc0(rdram, ctx, runtime); return;
    ctx->pc = 0x4CBFC0u;
}
