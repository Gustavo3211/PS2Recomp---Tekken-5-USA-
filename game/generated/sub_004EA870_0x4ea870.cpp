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

// Function: sub_004EA870
// Address: 0x4ea870 - 0x4ea978
void sub_004EA870_0x4ea870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA870_0x4ea870");
#endif

    ctx->pc = 0x4ea870u;

    // 0x4ea870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ea870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ea874: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4ea874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ea878: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ea878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ea87c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ea87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ea880: 0x244511e8  addiu       $a1, $v0, 0x11E8
    ctx->pc = 0x4ea880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4584));
    // 0x4ea884: 0x24c8015e  addiu       $t0, $a2, 0x15E
    ctx->pc = 0x4ea884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 350));
    // 0x4ea888: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ea888u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ea88c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4ea88cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4ea890: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4ea890u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ea894: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea898: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ea898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ea89c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ea89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ea8a0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ea8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ea8a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea8a8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ea8a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ea8ac: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4ea8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4ea8b0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ea8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ea8b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ea8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ea8b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ea8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ea8bc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4ea8bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ea8c0: 0x2c620800  sltiu       $v0, $v1, 0x800
    ctx->pc = 0x4ea8c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
    // 0x4ea8c4: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4EA8C4u;
    {
        const bool branch_taken_0x4ea8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA8C4u;
        // 0x4ea8c8: 0x24c901bc  addiu       $t1, $a2, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea8c4) {
            ctx->pc = 0x4EA958u;
            goto label_4ea958;
        }
    }
    ctx->pc = 0x4EA8CCu;
    // 0x4ea8cc: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4ea8ccu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ea8d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea8d4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ea8d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ea8d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4ea8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ea8dc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4ea8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4ea8e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ea8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ea8e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea8e8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ea8e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ea8ec: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ea8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ea8f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ea8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ea8f4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ea8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ea8f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea8fc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ea8fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ea900: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ea900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ea904: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x4ea904u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x4ea908: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ea908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ea90c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ea90cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ea910: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ea910u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ea914: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ea914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ea918: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ea918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ea91c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4ea91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4ea920: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4ea920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4ea924: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ea924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ea928: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4ea928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4ea92c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ea92cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ea930: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ea930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ea934: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ea934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ea938: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ea938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ea93c: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x4ea93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x4ea940: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ea940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ea944: 0x94638098  lhu         $v1, -0x7F68($v1)
    ctx->pc = 0x4ea944u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294934680)));
    // 0x4ea948: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x4ea948u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ea94c: 0x813ab16  j           func_4EAC58
    ctx->pc = 0x4EA94Cu;
    ctx->pc = 0x4EA950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA94Cu;
    // 0x4ea950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EAC58u;
    sub_004EAC58_0x4eac58(rdram, ctx, runtime); return;
    ctx->pc = 0x4EA954u;
    // 0x4ea954: 0x0  nop
    ctx->pc = 0x4ea954u;
    // NOP
label_4ea958:
    // 0x4ea958: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ea958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ea95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ea960: 0xa4c30162  sh          $v1, 0x162($a2)
    ctx->pc = 0x4ea960u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ea964: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4ea964u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ea968: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ea968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ea96c: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4ea96cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ea970: 0x813aa5e  j           func_4EA978
    ctx->pc = 0x4EA970u;
    ctx->pc = 0x4EA974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EA970u;
    // 0x4ea974: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA978u;
    sub_004EA978_0x4ea978(rdram, ctx, runtime); return;
    ctx->pc = 0x4EA978u;
}
