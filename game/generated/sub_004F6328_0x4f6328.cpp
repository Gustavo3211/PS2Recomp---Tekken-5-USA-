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

// Function: sub_004F6328
// Address: 0x4f6328 - 0x4f64d8
void sub_004F6328_0x4f6328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6328_0x4f6328");
#endif

    switch (ctx->pc) {
        case 0x4f6354u: goto label_4f6354;
        default: break;
    }

    ctx->pc = 0x4f6328u;

    // 0x4f6328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f6328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f632c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f632cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f6330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f6330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6334: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f6334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f6338: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4f6338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4f633c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f633cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4f6340: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4f6340u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f6344: 0x4400049  bltz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x4F6344u;
    {
        const bool branch_taken_0x4f6344 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6344u;
        // 0x4f6348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6344) {
            ctx->pc = 0x4F646Cu;
            goto label_4f646c;
        }
    }
    ctx->pc = 0x4F634Cu;
    // 0x4f634c: 0xc12b66e  jal         func_4AD9B8
    ctx->pc = 0x4F634Cu;
    SET_GPR_U32(ctx, 31, 0x4F6354u);
    ctx->pc = 0x4AD9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD9B8u, 0x4F634Cu, 0x4F6354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6354u;
label_4f6354:
    // 0x4f6354: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4f6354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4f6358: 0x260b015e  addiu       $t3, $s0, 0x15E
    ctx->pc = 0x4f6358u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4f635c: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x4f635cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x4f6360: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4f6360u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f6364: 0x26080160  addiu       $t0, $s0, 0x160
    ctx->pc = 0x4f6364u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x4f6368: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f6368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f636c: 0x260a0162  addiu       $t2, $s0, 0x162
    ctx->pc = 0x4f636cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 354));
    // 0x4f6370: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f6374: 0x26050128  addiu       $a1, $s0, 0x128
    ctx->pc = 0x4f6374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 296));
    // 0x4f6378: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f6378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f637c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f637cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f6380: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f6380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6384: 0x26090164  addiu       $t1, $s0, 0x164
    ctx->pc = 0x4f6384u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
    // 0x4f6388: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f6388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f638c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f638cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f6390: 0x2607012c  addiu       $a3, $s0, 0x12C
    ctx->pc = 0x4f6390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x4f6394: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4f6394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f6398: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f6398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f639c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f63a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f63a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f63a4: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4f63a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f63a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f63a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f63ac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f63acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f63b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f63b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f63b4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f63b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f63b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f63b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f63bc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f63bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f63c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f63c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f63c4: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4f63c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f63c8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f63c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f63cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f63ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f63d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f63d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f63d4: 0x96020166  lhu         $v0, 0x166($s0)
    ctx->pc = 0x4f63d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x4f63d8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4f63d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f63dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f63dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f63e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f63e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f63e4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f63e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f63e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f63e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f63ec: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f63ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f63f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f63f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f63f4: 0x86020168  lh          $v0, 0x168($s0)
    ctx->pc = 0x4f63f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x4f63f8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4f63f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4f63fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f63fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6400: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f6400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f6404: 0x860201be  lh          $v0, 0x1BE($s0)
    ctx->pc = 0x4f6404u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4f6408: 0x21480  sll         $v0, $v0, 18
    ctx->pc = 0x4f6408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x4f640c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x4f640cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x4f6410: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4f6410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4f6414: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4f6414u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f6418: 0x22c02  srl         $a1, $v0, 16
    ctx->pc = 0x4f6418u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4f641c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f641cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f6420: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x4f6420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x4f6424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f6424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4f6428: 0x8c4283d8  lw          $v0, -0x7C28($v0)
    ctx->pc = 0x4f6428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935512)));
    // 0x4f642c: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4f642cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f6430: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f6430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f6434: 0xa5040000  sh          $a0, 0x0($t0)
    ctx->pc = 0x4f6434u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f6438: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f6438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f643c: 0xa5630000  sh          $v1, 0x0($t3)
    ctx->pc = 0x4f643cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f6440: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4f6440u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f6444: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f6444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f6448: 0xa5440000  sh          $a0, 0x0($t2)
    ctx->pc = 0x4f6448u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f644c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f644cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f6450: 0xa6030032  sh          $v1, 0x32($s0)
    ctx->pc = 0x4f6450u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f6454: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x4f6454u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4f6458: 0xa6040034  sh          $a0, 0x34($s0)
    ctx->pc = 0x4f6458u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f645c: 0xa5200000  sh          $zero, 0x0($t1)
    ctx->pc = 0x4f645cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f6460: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4f6460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f6464: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4f6464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4f6468: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4f6468u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4f646c:
    // 0x4f646c: 0x860201bc  lh          $v0, 0x1BC($s0)
    ctx->pc = 0x4f646cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x4f6470: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4f6470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4f6474: 0x34a4ffff  ori         $a0, $a1, 0xFFFF
    ctx->pc = 0x4f6474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f6478: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4f6478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4f647c: 0x822824  and         $a1, $a0, $v0
    ctx->pc = 0x4f647cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f6480: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x4f6480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f6484: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f6484u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f6488: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4F6488u;
    {
        const bool branch_taken_0x4f6488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6488u;
        // 0x4f648c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6488) {
            ctx->pc = 0x4F64A8u;
            goto label_4f64a8;
        }
    }
    ctx->pc = 0x4F6490u;
    // 0x4f6490: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4F6490u;
    {
        const bool branch_taken_0x4f6490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F6494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6490u;
        // 0x4f6494: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f6490) {
            ctx->pc = 0x4F64C0u;
            goto label_4f64c0;
        }
    }
    ctx->pc = 0x4F6498u;
    // 0x4f6498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f6498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f649c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f649cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f64a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4F64A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F64A0u;
        // 0x4f64a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F64A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F64A8u;
label_4f64a8:
    // 0x4f64a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f64a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f64ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f64acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f64b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f64b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f64b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f64b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f64b8: 0x813d7ea  j           func_4F5FA8
    ctx->pc = 0x4F64B8u;
    ctx->pc = 0x4F64BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F64B8u;
    // 0x4f64bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5FA8u, 0x4F64B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F64C0u;
label_4f64c0:
    // 0x4f64c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f64c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f64c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f64c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f64c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f64c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f64cc: 0x813d7b6  j           func_4F5ED8
    ctx->pc = 0x4F64CCu;
    ctx->pc = 0x4F64D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F64CCu;
    // 0x4f64d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5ED8u, 0x4F64CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4F64D4u;
    // 0x4f64d4: 0x0  nop
    ctx->pc = 0x4f64d4u;
    // NOP
    ctx->pc = 0x4f64d8u;
}
