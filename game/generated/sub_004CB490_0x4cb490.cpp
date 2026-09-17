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

// Function: sub_004CB490
// Address: 0x4cb490 - 0x4cb558
void sub_004CB490_0x4cb490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CB490_0x4cb490");
#endif

    ctx->pc = 0x4cb490u;

    // 0x4cb490: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cb490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cb494: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cb494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cb498: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cb498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cb49c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cb49cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cb4a0: 0x8c460f78  lw          $a2, 0xF78($v0)
    ctx->pc = 0x4cb4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0F78u));
    // 0x4cb4a4: 0x24a70f60  addiu       $a3, $a1, 0xF60
    ctx->pc = 0x4cb4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
    // 0x4cb4a8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4cb4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4cb4ac: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4cb4acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4cb4b0: 0x84c20160  lh          $v0, 0x160($a2)
    ctx->pc = 0x4cb4b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x4cb4b4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4cb4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cb4b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb4bc: 0x24c901bc  addiu       $t1, $a2, 0x1BC
    ctx->pc = 0x4cb4bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
    // 0x4cb4c0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cb4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cb4c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb4c8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4cb4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4cb4cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cb4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cb4d0: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4cb4d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cb4d4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x4cb4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x4cb4d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cb4dc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cb4dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cb4e0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cb4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cb4e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cb4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cb4e8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4cb4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4cb4ec: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4cb4ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cb4f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CB4F0u;
    {
        const bool branch_taken_0x4cb4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CB4F0u;
        // 0x4cb4f4: 0x3465ffff  ori         $a1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cb4f0) {
            ctx->pc = 0x4CB508u;
            goto label_4cb508;
        }
    }
    ctx->pc = 0x4CB4F8u;
    // 0x4cb4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cb4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cb4fc: 0x8132d66  j           func_4CB598
    ctx->pc = 0x4CB4FCu;
    ctx->pc = 0x4CB500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB4FCu;
    // 0x4cb500: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB598u, 0x4CB4FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CB504u;
    // 0x4cb504: 0x0  nop
    ctx->pc = 0x4cb504u;
    // NOP
label_4cb508:
    // 0x4cb508: 0x84c201b8  lh          $v0, 0x1B8($a2)
    ctx->pc = 0x4cb508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 440)));
    // 0x4cb50c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cb50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cb510: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cb510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cb514: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x4cb514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cb518: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4cb518u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4cb51c: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x4cb51cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cb520: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x4cb520u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cb524: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4cb524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4cb528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4cb528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4cb52c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cb52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cb530: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cb530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cb534: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4cb534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cb538: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4cb538u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4cb53c: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4cb53cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cb540: 0xa4c3014a  sh          $v1, 0x14A($a2)
    ctx->pc = 0x4cb540u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 330), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cb544: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4cb544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cb548: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cb548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cb54c: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4cb54cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cb550: 0x8132d56  j           func_4CB558
    ctx->pc = 0x4CB550u;
    ctx->pc = 0x4CB554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CB550u;
    // 0x4cb554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CB558u;
    sub_004CB558_0x4cb558(rdram, ctx, runtime); return;
    ctx->pc = 0x4CB558u;
}
