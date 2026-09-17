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

// Function: sub_004EF510
// Address: 0x4ef510 - 0x4ef5b0
void sub_004EF510_0x4ef510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EF510_0x4ef510");
#endif

    ctx->pc = 0x4ef510u;

    // 0x4ef510: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ef510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ef514: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ef514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ef518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ef518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ef51c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ef51cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ef520: 0x8c461228  lw          $a2, 0x1228($v0)
    ctx->pc = 0x4ef520u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1228u));
    // 0x4ef524: 0x24a51210  addiu       $a1, $a1, 0x1210
    ctx->pc = 0x4ef524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4624));
    // 0x4ef528: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ef528u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1210u));
    // 0x4ef52c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ef52cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4ef530: 0x84c20160  lh          $v0, 0x160($a2)
    ctx->pc = 0x4ef530u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x4ef534: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4ef534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ef538: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef53c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ef53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ef540: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef544: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ef544u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ef548: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ef548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ef54c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ef54cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ef550: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4ef550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4ef554: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ef554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ef558: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ef558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ef55c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ef55cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ef560: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ef560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ef564: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4EF564u;
    {
        const bool branch_taken_0x4ef564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EF568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EF564u;
        // 0x4ef568: 0x24c801bc  addiu       $t0, $a2, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ef564) {
            ctx->pc = 0x4EF578u;
            goto label_4ef578;
        }
    }
    ctx->pc = 0x4EF56Cu;
    // 0x4ef56c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef56cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef570: 0x813bec8  j           func_4EFB20
    ctx->pc = 0x4EF570u;
    ctx->pc = 0x4EF574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF570u;
    // 0x4ef574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EFB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EFB20u, 0x4EF570u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4EF578u;
label_4ef578:
    // 0x4ef578: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x4ef578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x4ef57c: 0x240304bf  addiu       $v1, $zero, 0x4BF
    ctx->pc = 0x4ef57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1215));
    // 0x4ef580: 0xacc00128  sw          $zero, 0x128($a2)
    ctx->pc = 0x4ef580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 296), GPR_U32(ctx, 0));
    // 0x4ef584: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4ef584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4ef588: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x4ef588u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ef58c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4ef58cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4ef590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ef590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ef594: 0xa4c2011e  sh          $v0, 0x11E($a2)
    ctx->pc = 0x4ef594u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ef598: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4ef598u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ef59c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4ef59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4ef5a0: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4ef5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ef5a4: 0x813bd6c  j           func_4EF5B0
    ctx->pc = 0x4EF5A4u;
    ctx->pc = 0x4EF5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EF5A4u;
    // 0x4ef5a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF5B0u;
    sub_004EF5B0_0x4ef5b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4EF5ACu;
    // 0x4ef5ac: 0x0  nop
    ctx->pc = 0x4ef5acu;
    // NOP
    ctx->pc = 0x4ef5b0u;
}
