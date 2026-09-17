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

// Function: sub_004DB4B0
// Address: 0x4db4b0 - 0x4db598
void sub_004DB4B0_0x4db4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB4B0_0x4db4b0");
#endif

    ctx->pc = 0x4db4b0u;

    // 0x4db4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4db4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4db4b4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4db4b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db4b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4db4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4db4bc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4db4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4db4c0: 0x244610fc  addiu       $a2, $v0, 0x10FC
    ctx->pc = 0x4db4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4348));
    // 0x4db4c4: 0x2505015e  addiu       $a1, $t0, 0x15E
    ctx->pc = 0x4db4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 350));
    // 0x4db4c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4db4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F10FCu));
    // 0x4db4cc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4db4ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4db4d0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4db4d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4db4d4: 0x250701bc  addiu       $a3, $t0, 0x1BC
    ctx->pc = 0x4db4d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 444));
    // 0x4db4d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4db4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4db4dc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4db4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4db4e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4db4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4db4e4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4db4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4db4e8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4db4e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4db4ec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4db4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4db4f0: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4db4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4db4f4: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4db4f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4db4f8: 0x3062ff00  andi        $v0, $v1, 0xFF00
    ctx->pc = 0x4db4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x4db4fc: 0x2c630700  sltiu       $v1, $v1, 0x700
    ctx->pc = 0x4db4fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1792) ? 1 : 0);
    // 0x4db500: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x4DB500u;
    {
        const bool branch_taken_0x4db500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DB500u;
        // 0x4db504: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db500) {
            ctx->pc = 0x4DB580u;
            goto label_4db580;
        }
    }
    ctx->pc = 0x4DB508u;
    // 0x4db508: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4db508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4db50c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4db50cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4db510: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4db510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4db514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db518: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4db518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4db51c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4db51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4db520: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4db520u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4db524: 0x3465ffff  ori         $a1, $v1, 0xFFFF
    ctx->pc = 0x4db524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4db528: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4db528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4db52c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4db52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4db530: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x4db530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x4db534: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4db534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4db538: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4db538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4db53c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4db53cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4db540: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4db540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4db544: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4db544u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4db548: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4db548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4db54c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4db54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4db550: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4db550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4db554: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4db554u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4db558: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4db558u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4db55c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4db55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4db560: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4db560u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4db564: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4db564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4db568: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4db568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4db56c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4db56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4db570: 0x94637c08  lhu         $v1, 0x7C08($v1)
    ctx->pc = 0x4db570u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 31752)));
    // 0x4db574: 0xa503000c  sh          $v1, 0xC($t0)
    ctx->pc = 0x4db574u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4db578: 0x8136dae  j           func_4DB6B8
    ctx->pc = 0x4DB578u;
    ctx->pc = 0x4DB57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB578u;
    // 0x4db57c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB6B8u, 0x4DB578u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DB580u;
label_4db580:
    // 0x4db580: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4db580u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4db584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4db584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db588: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4db588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4db58c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4db58cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4db590: 0x8136d66  j           func_4DB598
    ctx->pc = 0x4DB590u;
    ctx->pc = 0x4DB594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DB590u;
    // 0x4db594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB598u;
    sub_004DB598_0x4db598(rdram, ctx, runtime); return;
    ctx->pc = 0x4DB598u;
}
