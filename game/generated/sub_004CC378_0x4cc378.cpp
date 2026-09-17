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

// Function: sub_004CC378
// Address: 0x4cc378 - 0x4cc440
void sub_004CC378_0x4cc378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CC378_0x4cc378");
#endif

    ctx->pc = 0x4cc378u;

    // 0x4cc378: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cc378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cc37c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cc37cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cc380: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cc380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cc384: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cc384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cc388: 0x8c460f78  lw          $a2, 0xF78($v0)
    ctx->pc = 0x4cc388u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0F78u));
    // 0x4cc38c: 0x24a70f60  addiu       $a3, $a1, 0xF60
    ctx->pc = 0x4cc38cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
    // 0x4cc390: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4cc390u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4cc394: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4cc394u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4cc398: 0x84c20160  lh          $v0, 0x160($a2)
    ctx->pc = 0x4cc398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x4cc39c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4cc39cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cc3a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc3a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc3a4: 0x24c901bc  addiu       $t1, $a2, 0x1BC
    ctx->pc = 0x4cc3a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
    // 0x4cc3a8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cc3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cc3ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc3b0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4cc3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4cc3b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cc3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cc3b8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4cc3b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cc3bc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x4cc3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x4cc3c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cc3c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cc3c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cc3c8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cc3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cc3cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cc3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cc3d0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4cc3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4cc3d4: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4cc3d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cc3d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CC3D8u;
    {
        const bool branch_taken_0x4cc3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CC3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CC3D8u;
        // 0x4cc3dc: 0x3465ffff  ori         $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc3d8) {
            ctx->pc = 0x4CC3F0u;
            goto label_4cc3f0;
        }
    }
    ctx->pc = 0x4CC3E0u;
    // 0x4cc3e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cc3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cc3e4: 0x8133120  j           func_4CC480
    ctx->pc = 0x4CC3E4u;
    ctx->pc = 0x4CC3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC3E4u;
    // 0x4cc3e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CC480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CC480u, 0x4CC3E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CC3ECu;
    // 0x4cc3ec: 0x0  nop
    ctx->pc = 0x4cc3ecu;
    // NOP
label_4cc3f0:
    // 0x4cc3f0: 0x84c201b8  lh          $v0, 0x1B8($a2)
    ctx->pc = 0x4cc3f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 440)));
    // 0x4cc3f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cc3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cc3f8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cc3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cc3fc: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4cc3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cc400: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4cc400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4cc404: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x4cc404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cc408: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4cc408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cc40c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4cc40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4cc410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4cc410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4cc414: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cc414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cc418: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cc418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cc41c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4cc41cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cc420: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4cc420u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4cc424: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4cc424u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cc428: 0xa4c3014a  sh          $v1, 0x14A($a2)
    ctx->pc = 0x4cc428u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 330), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cc42c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4cc42cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cc430: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cc430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cc434: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4cc434u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cc438: 0x8133110  j           func_4CC440
    ctx->pc = 0x4CC438u;
    ctx->pc = 0x4CC43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CC438u;
    // 0x4cc43c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CC440u;
    sub_004CC440_0x4cc440(rdram, ctx, runtime); return;
    ctx->pc = 0x4CC440u;
}
