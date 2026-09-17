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

// Function: sub_00103AB8
// Address: 0x103ab8 - 0x103b80
void sub_00103AB8_0x103ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103AB8_0x103ab8");
#endif

    switch (ctx->pc) {
        case 0x103ad0u: goto label_103ad0;
        case 0x103b38u: goto label_103b38;
        default: break;
    }

    ctx->pc = 0x103ab8u;

    // 0x103ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x103ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x103abc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x103ac0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x103ac4: 0xac820828  sw          $v0, 0x828($a0)
    ctx->pc = 0x103ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2088), GPR_U32(ctx, 2));
    // 0x103ac8: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x103AC8u;
    SET_GPR_U32(ctx, 31, 0x103AD0u);
    ctx->pc = 0x103ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103AC8u;
    // 0x103acc: 0xac8001c0  sw          $zero, 0x1C0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x103AC8u, 0x103AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103AD0u;
label_103ad0:
    // 0x103ad0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x103ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x103ad4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x103ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x103ad8: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x103ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x103adc: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x103adcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x103ae0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x103ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x103ae4: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x103ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x103ae8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x103ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x103aec: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x103aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x103af0: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x103af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x103af4: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x103af4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x103af8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x103af8u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x103afc: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x103afcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x103b00: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x103b00u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x103b04: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x103b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x103b08: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x103b08u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 0)); // MMIO: 0x1000b400
    // 0x103b0c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x103b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x103b10: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x103b10u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 0)); // MMIO: 0x1000d400
    // 0x103b14: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x103b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x103b18: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x103b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x103b1c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x103b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x103b20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x103b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x103b24: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x103b24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x103b28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103B28u;
    {
        const bool branch_taken_0x103b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103B28u;
        // 0x103b2c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103b28) {
            ctx->pc = 0x103B3Cu;
            goto label_103b3c;
        }
    }
    ctx->pc = 0x103B30u;
    // 0x103b30: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x103B30u;
    SET_GPR_U32(ctx, 31, 0x103B38u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x103B30u, 0x103B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103B38u;
label_103b38:
    // 0x103b38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x103b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_103b3c:
    // 0x103b3c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x103b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x103b40: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x103b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x103b44: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x103b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x103b48: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x103b48u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x1000b020
    // 0x103b4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x103b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x103b50: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x103b50u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x103b54: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x103b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x103b58: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x103b58u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 0)); // MMIO: 0x1000d420
    // 0x103b5c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x103b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x103b60: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x103b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x103b64: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x103b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x103b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103b6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x103b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b70: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x103b70u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 3)); // MMIO: 0x10002010
    // 0x103b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x103b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103b78: 0x8042c40  j           func_10B100
    ctx->pc = 0x103B78u;
    ctx->pc = 0x103B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103B78u;
    // 0x103b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B100u, 0x103B78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x103B80u;
}
