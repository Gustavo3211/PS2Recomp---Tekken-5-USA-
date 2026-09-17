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

// Function: sub_004A8388
// Address: 0x4a8388 - 0x4a8508
void sub_004A8388_0x4a8388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8388_0x4a8388");
#endif

    switch (ctx->pc) {
        case 0x4a8438u: goto label_4a8438;
        case 0x4a844cu: goto label_4a844c;
        default: break;
    }

    ctx->pc = 0x4a8388u;

    // 0x4a8388: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a8388u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a838c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a838cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a8390: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4a8390u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4a8394: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a8394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a8398: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x4a8398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x4a839c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a83a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a83a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a83a4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4A83A4u;
    {
        const bool branch_taken_0x4a83a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A83A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83A4u;
        // 0x4a83a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a83a4) {
            ctx->pc = 0x4A8430u;
            goto label_4a8430;
        }
    }
    ctx->pc = 0x4A83ACu;
    // 0x4a83ac: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4a83acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4a83b0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4a83b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4a83b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a83b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a83b8: 0x8c63b230  lw          $v1, -0x4DD0($v1)
    ctx->pc = 0x4a83b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947376)));
    // 0x4a83bc: 0x600008  jr          $v1
    ctx->pc = 0x4A83BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A83C8u: goto label_4a83c8;
            case 0x4A83D8u: goto label_4a83d8;
            case 0x4A83E8u: goto label_4a83e8;
            case 0x4A83F8u: goto label_4a83f8;
            case 0x4A8408u: goto label_4a8408;
            case 0x4A8418u: goto label_4a8418;
            case 0x4A8428u: goto label_4a8428;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A83BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4A83C4u;
    // 0x4a83c4: 0x0  nop
    ctx->pc = 0x4a83c4u;
    // NOP
label_4a83c8:
    // 0x4a83c8: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a83c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a83cc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4A83CCu;
    {
        const bool branch_taken_0x4a83cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83CCu;
        // 0x4a83d0: 0x24508ec0  addiu       $s0, $v0, -0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a83cc) {
            ctx->pc = 0x4A8430u;
            goto label_4a8430;
        }
    }
    ctx->pc = 0x4A83D4u;
    // 0x4a83d4: 0x0  nop
    ctx->pc = 0x4a83d4u;
    // NOP
label_4a83d8:
    // 0x4a83d8: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a83dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4A83DCu;
    {
        const bool branch_taken_0x4a83dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83DCu;
        // 0x4a83e0: 0x24508f00  addiu       $s0, $v0, -0x7100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a83dc) {
            ctx->pc = 0x4A8430u;
            goto label_4a8430;
        }
    }
    ctx->pc = 0x4A83E4u;
    // 0x4a83e4: 0x0  nop
    ctx->pc = 0x4a83e4u;
    // NOP
label_4a83e8:
    // 0x4a83e8: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a83e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a83ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4A83ECu;
    {
        const bool branch_taken_0x4a83ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83ECu;
        // 0x4a83f0: 0x24508f40  addiu       $s0, $v0, -0x70C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a83ec) {
            ctx->pc = 0x4A8430u;
            goto label_4a8430;
        }
    }
    ctx->pc = 0x4A83F4u;
    // 0x4a83f4: 0x0  nop
    ctx->pc = 0x4a83f4u;
    // NOP
label_4a83f8:
    // 0x4a83f8: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a83f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a83fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4A83FCu;
    {
        const bool branch_taken_0x4a83fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A83FCu;
        // 0x4a8400: 0x24508f80  addiu       $s0, $v0, -0x7080 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a83fc) {
            ctx->pc = 0x4A8430u;
            goto label_4a8430;
        }
    }
    ctx->pc = 0x4A8404u;
    // 0x4a8404: 0x0  nop
    ctx->pc = 0x4a8404u;
    // NOP
label_4a8408:
    // 0x4a8408: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a8408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a840c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A840Cu;
    {
        const bool branch_taken_0x4a840c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A840Cu;
        // 0x4a8410: 0x24508fc0  addiu       $s0, $v0, -0x7040 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a840c) {
            ctx->pc = 0x4A8430u;
            goto label_4a8430;
        }
    }
    ctx->pc = 0x4A8414u;
    // 0x4a8414: 0x0  nop
    ctx->pc = 0x4a8414u;
    // NOP
label_4a8418:
    // 0x4a8418: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a8418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a841c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A841Cu;
    {
        const bool branch_taken_0x4a841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A841Cu;
        // 0x4a8420: 0x24509000  addiu       $s0, $v0, -0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a841c) {
            ctx->pc = 0x4A8430u;
            goto label_4a8430;
        }
    }
    ctx->pc = 0x4A8424u;
    // 0x4a8424: 0x0  nop
    ctx->pc = 0x4a8424u;
    // NOP
label_4a8428:
    // 0x4a8428: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a8428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a842c: 0x24509040  addiu       $s0, $v0, -0x6FC0
    ctx->pc = 0x4a842cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938688));
label_4a8430:
    // 0x4a8430: 0x241100d7  addiu       $s1, $zero, 0xD7
    ctx->pc = 0x4a8430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 215));
    // 0x4a8434: 0x0  nop
    ctx->pc = 0x4a8434u;
    // NOP
label_4a8438:
    // 0x4a8438: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a8438u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a843c: 0x442002d  bltzl       $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x4A843Cu;
    {
        const bool branch_taken_0x4a843c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4a843c) {
            ctx->pc = 0x4A8440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A843Cu;
            // 0x4a8440: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A84F4u;
            goto label_4a84f4;
        }
    }
    ctx->pc = 0x4A8444u;
    // 0x4a8444: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A8444u;
    SET_GPR_U32(ctx, 31, 0x4A844Cu);
    ctx->pc = 0x4A8448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A8444u;
    // 0x4a8448: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A8444u, 0x4A844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A844Cu;
label_4a844c:
    // 0x4a844c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x4A844Cu;
    {
        const bool branch_taken_0x4a844c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A8450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A844Cu;
        // 0x4a8450: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a844c) {
            ctx->pc = 0x4A84F0u;
            goto label_4a84f0;
        }
    }
    ctx->pc = 0x4A8454u;
    // 0x4a8454: 0xa4510008  sh          $s1, 0x8($v0)
    ctx->pc = 0x4a8454u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 17));
    // 0x4a8458: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a8458u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a845c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a845cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a8460: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a8460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8464: 0xa4440022  sh          $a0, 0x22($v0)
    ctx->pc = 0x4a8464u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a8468: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a8468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a846c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a846cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a8470: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a8470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8474: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4a8474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a8478: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x4a8478u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a847c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a847cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a8480: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a8480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a8484: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a8484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8488: 0xa4440024  sh          $a0, 0x24($v0)
    ctx->pc = 0x4a8488u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a848c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a848cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a8490: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a8490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a8494: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a8494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8498: 0xa4430026  sh          $v1, 0x26($v0)
    ctx->pc = 0x4a8498u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a849c: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a849cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a84a0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a84a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a84a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a84a8: 0xa444002e  sh          $a0, 0x2E($v0)
    ctx->pc = 0x4a84a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a84ac: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a84acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a84b0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a84b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a84b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a84b8: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x4a84b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a84bc: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a84bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a84c0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a84c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a84c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a84c8: 0xa4440028  sh          $a0, 0x28($v0)
    ctx->pc = 0x4a84c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a84cc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a84ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a84d0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a84d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a84d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a84d8: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x4a84d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a84dc: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a84dcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a84e0: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a84e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a84e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a84e8: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x4A84E8u;
    {
        const bool branch_taken_0x4a84e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A84ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84E8u;
        // 0x4a84ec: 0xa444002c  sh          $a0, 0x2C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a84e8) {
            ctx->pc = 0x4A8438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a8438;
        }
    }
    ctx->pc = 0x4A84F0u;
label_4a84f0:
    // 0x4a84f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a84f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a84f4:
    // 0x4a84f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a84f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a84f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a84f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a84fc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A84FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A84FCu;
        // 0x4a8500: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A84FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8504u;
    // 0x4a8504: 0x0  nop
    ctx->pc = 0x4a8504u;
    // NOP
    ctx->pc = 0x4a8508u;
}
