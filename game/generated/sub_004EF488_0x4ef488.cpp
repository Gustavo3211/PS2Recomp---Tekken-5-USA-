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

// Function: sub_004EF488
// Address: 0x4ef488 - 0x4ef510
void sub_004EF488_0x4ef488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF488_0x4ef488");
#endif

    ctx->pc = 0x4ef488u;

    // 0x4ef488: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ef488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ef48c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef48cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ef490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ef494: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ef494u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ef498: 0x8c47122c  lw          $a3, 0x122C($v0)
    ctx->pc = 0x4ef498u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F122Cu));
    // 0x4ef49c: 0x24c61210  addiu       $a2, $a2, 0x1210
    ctx->pc = 0x4ef49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4624));
    // 0x4ef4a0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4ef4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4ef4a4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4ef4a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4ef4a8: 0x84e2000a  lh          $v0, 0xA($a3)
    ctx->pc = 0x4ef4a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x4ef4ac: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ef4acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ef4b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef4b4: 0x8ca71228  lw          $a3, 0x1228($a1)
    ctx->pc = 0x4ef4b4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F1228u));
    // 0x4ef4b8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ef4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ef4bc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4ef4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef4c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef4c4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4ef4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4ef4c8: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x4ef4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x4ef4cc: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4ef4ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ef4d0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4ef4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4ef4d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ef4d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ef4d8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4ef4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ef4dc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4EF4DCu;
    {
        const bool branch_taken_0x4ef4dc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4EF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF4DCu;
        // 0x4ef4e0: 0x24a901bc  addiu       $t1, $a1, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef4dc) {
            ctx->pc = 0x4EF4F0u;
            goto label_4ef4f0;
        }
    }
    ctx->pc = 0x4EF4E4u;
    // 0x4ef4e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef4e8: 0x813bec8  j           func_4EFB20
    ctx->pc = 0x4EF4E8u;
    ctx->pc = 0x4EF4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF4E8u;
    // 0x4ef4ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EFB20u, 0x4EF4E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4EF4F0u;
label_4ef4f0:
    // 0x4ef4f0: 0x240304c7  addiu       $v1, $zero, 0x4C7
    ctx->pc = 0x4ef4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1223));
    // 0x4ef4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef4f8: 0xa4a3000c  sh          $v1, 0xC($a1)
    ctx->pc = 0x4ef4f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ef4fc: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4ef4fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ef500: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ef500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ef504: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4ef504u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef508: 0x813bd44  j           func_4EF510
    ctx->pc = 0x4EF508u;
    ctx->pc = 0x4EF50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF508u;
    // 0x4ef50c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF510u;
    sub_004EF510_0x4ef510(rdram, ctx, runtime); return;
    ctx->pc = 0x4EF510u;
}
