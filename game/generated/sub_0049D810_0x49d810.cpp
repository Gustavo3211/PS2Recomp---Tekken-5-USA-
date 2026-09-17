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

// Function: sub_0049D810
// Address: 0x49d810 - 0x49dd30
void sub_0049D810_0x49d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049D810_0x49d810");
#endif

    switch (ctx->pc) {
        case 0x49d868u: goto label_49d868;
        case 0x49d884u: goto label_49d884;
        case 0x49dba0u: goto label_49dba0;
        default: break;
    }

    ctx->pc = 0x49d810u;

    // 0x49d810: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49d810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49d814: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x49d814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x49d818: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49d818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49d81c: 0x24630ba4  addiu       $v1, $v1, 0xBA4
    ctx->pc = 0x49d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2980));
    // 0x49d820: 0x24428040  addiu       $v0, $v0, -0x7FC0
    ctx->pc = 0x49d820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934592));
    // 0x49d824: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x49d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x49d828: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x49d828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x49d82c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x49d82cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d830: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x49d830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x49d834: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x49d834u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x49d838: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x49d838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x49d83c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49d83cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49d840: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x49d840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x49d844: 0x24147fff  addiu       $s4, $zero, 0x7FFF
    ctx->pc = 0x49d844u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x49d848: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x49d848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x49d84c: 0x24930b8c  addiu       $s3, $a0, 0xB8C
    ctx->pc = 0x49d84cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 2956));
    // 0x49d850: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x49d850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x49d854: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49d854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d858: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49d858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0BA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0BA4u, _value); } while (0);
    // 0x49d85c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49d860: 0x24550b88  addiu       $s5, $v0, 0xB88
    ctx->pc = 0x49d860u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 2952));
    // 0x49d864: 0x0  nop
    ctx->pc = 0x49d864u;
    // NOP
label_49d868:
    // 0x49d868: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x49d868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d86c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x49d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x49d870: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x49d870u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d874: 0x50640126  beql        $v1, $a0, . + 4 + (0x126 << 2)
    ctx->pc = 0x49D874u;
    {
        const bool branch_taken_0x49d874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x49d874) {
            ctx->pc = 0x49D878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49D874u;
            // 0x49d878: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49DD10u;
            goto label_49dd10;
        }
    }
    ctx->pc = 0x49D87Cu;
    // 0x49d87c: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x49D87Cu;
    SET_GPR_U32(ctx, 31, 0x49D884u);
    ctx->pc = 0x49D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D87Cu;
    // 0x49d880: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x49D87Cu, 0x49D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D884u;
label_49d884:
    // 0x49d884: 0x240300e4  addiu       $v1, $zero, 0xE4
    ctx->pc = 0x49d884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 228));
    // 0x49d888: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49d888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d88c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x49d88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49d890: 0x2124025  or          $t0, $s0, $s2
    ctx->pc = 0x49d890u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x49d894: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x49d894u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x49d898: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x49d898u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x49d89c: 0x25a90b84  addiu       $t1, $t5, 0xB84
    ctx->pc = 0x49d89cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 2948));
    // 0x49d8a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d8a4: 0xa444000e  sh          $a0, 0xE($v0)
    ctx->pc = 0x49d8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x49d8a8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x49d8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x49d8ac: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x49d8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d8b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x49d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d8b4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x49d8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x49d8b8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x49d8b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49d8bc: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x49d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x49d8c0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d8c4: 0x24860002  addiu       $a2, $a0, 0x2
    ctx->pc = 0x49d8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x49d8c8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d8cc: 0x24870004  addiu       $a3, $a0, 0x4
    ctx->pc = 0x49d8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x49d8d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d8d4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x49d8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x49d8d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49d8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49d8dc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49d8e0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x49d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x49d8e4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x49d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d8e8: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x49d8e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49d8ec: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x49d8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x49d8f0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d8f4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d8f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d8fc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x49d8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x49d900: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49d900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49d904: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49d904u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49d908: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x49d908u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x49d90c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49d90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d910: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x49d910u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49d914: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x49d914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x49d918: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49d918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49d91c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d920: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d924: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x49d924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x49d928: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49d928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49d92c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49d92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49d930: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x49d930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x49d934: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49d934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d938: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x49d938u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49d93c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x49d93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x49d940: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49d944: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x49d944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x49d948: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d94c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49d94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49d950: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49d950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49d954: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x49d954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d958: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x49d958u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49d95c: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x49d95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x49d960: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d964: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x49d964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x49d968: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d96c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49d96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49d970: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49d970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49d974: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49d974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d978: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x49d978u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49d97c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x49d97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x49d980: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49d984: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x49d984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x49d988: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d98c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49d98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49d990: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49d990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49d994: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x49d994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d998: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49d998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49d99c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x49d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49d9a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x49d9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x49d9a4: 0x24650002  addiu       $a1, $v1, 0x2
    ctx->pc = 0x49d9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49d9a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49d9ac: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x49d9acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49d9b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d9b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49d9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d9b8: 0x1028024  and         $s0, $t0, $v0
    ctx->pc = 0x49d9b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49d9bc: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x49d9bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x49d9c0: 0x3602ffff  ori         $v0, $s0, 0xFFFF
    ctx->pc = 0x49d9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x49d9c4: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49d9c8: 0x448024  and         $s0, $v0, $a0
    ctx->pc = 0x49d9c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49d9cc: 0xac700124  sw          $s0, 0x124($v1)
    ctx->pc = 0x49d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 16));
    // 0x49d9d0: 0x2123025  or          $a2, $s0, $s2
    ctx->pc = 0x49d9d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x49d9d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x49d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49d9d8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x49d9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d9dc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49d9dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d9e0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49d9e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49d9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x49d9e8: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x49d9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49d9ec: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49d9f0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x49d9f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49d9f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d9f8: 0xc38024  and         $s0, $a2, $v1
    ctx->pc = 0x49d9f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x49d9fc: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49da00: 0x3602ffff  ori         $v0, $s0, 0xFFFF
    ctx->pc = 0x49da00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x49da04: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x49da04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x49da08: 0x448024  and         $s0, $v0, $a0
    ctx->pc = 0x49da08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49da0c: 0xacf00128  sw          $s0, 0x128($a3)
    ctx->pc = 0x49da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 296), GPR_U32(ctx, 16));
    // 0x49da10: 0x2123025  or          $a2, $s0, $s2
    ctx->pc = 0x49da10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x49da14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x49da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49da18: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x49da18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49da1c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49da1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49da20: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49da20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49da24: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49da24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x49da28: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x49da28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49da2c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49da30: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x49da30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49da34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49da34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49da38: 0xc38024  and         $s0, $a2, $v1
    ctx->pc = 0x49da38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x49da3c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49da3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49da40: 0x3602ffff  ori         $v0, $s0, 0xFFFF
    ctx->pc = 0x49da40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x49da44: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x49da44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x49da48: 0x448024  and         $s0, $v0, $a0
    ctx->pc = 0x49da48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x49da4c: 0xacf0012c  sw          $s0, 0x12C($a3)
    ctx->pc = 0x49da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 300), GPR_U32(ctx, 16));
    // 0x49da50: 0x2123025  or          $a2, $s0, $s2
    ctx->pc = 0x49da50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x49da54: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x49da54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49da58: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x49da58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49da5c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49da5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49da60: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49da64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49da64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x49da68: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x49da68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49da6c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49da70: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x49da70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49da74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49da74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49da78: 0xc38024  and         $s0, $a2, $v1
    ctx->pc = 0x49da78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x49da7c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49da80: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x49da80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x49da84: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x49da84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x49da88: 0x648024  and         $s0, $v1, $a0
    ctx->pc = 0x49da88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49da8c: 0x2121024  and         $v0, $s0, $s2
    ctx->pc = 0x49da8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
    // 0x49da90: 0x2123025  or          $a2, $s0, $s2
    ctx->pc = 0x49da90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x49da94: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49da94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49da98: 0xa4e20130  sh          $v0, 0x130($a3)
    ctx->pc = 0x49da98u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 304), (uint16_t)GPR_U32(ctx, 2));
    // 0x49da9c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49daa0: 0xa4700132  sh          $s0, 0x132($v1)
    ctx->pc = 0x49daa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 306), (uint16_t)GPR_U32(ctx, 16));
    // 0x49daa4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x49daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49daa8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x49daa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49daac: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49daacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49dab0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49dab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49dab4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x49dab8: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x49dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49dabc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49dac0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x49dac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49dac4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49dac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49dac8: 0xc38024  and         $s0, $a2, $v1
    ctx->pc = 0x49dac8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x49dacc: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49daccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49dad0: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x49dad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x49dad4: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x49dad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x49dad8: 0x648024  and         $s0, $v1, $a0
    ctx->pc = 0x49dad8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49dadc: 0x2121024  and         $v0, $s0, $s2
    ctx->pc = 0x49dadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
    // 0x49dae0: 0x2123025  or          $a2, $s0, $s2
    ctx->pc = 0x49dae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
    // 0x49dae4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49dae8: 0xa4e20134  sh          $v0, 0x134($a3)
    ctx->pc = 0x49dae8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 308), (uint16_t)GPR_U32(ctx, 2));
    // 0x49daec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49daecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49daf0: 0xa4700136  sh          $s0, 0x136($v1)
    ctx->pc = 0x49daf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 310), (uint16_t)GPR_U32(ctx, 16));
    // 0x49daf4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x49daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49daf8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x49daf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dafc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49dafcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49db00: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49db00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49db04: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49db04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x49db08: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x49db08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49db0c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49db10: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x49db10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49db14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49db14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49db18: 0xc38024  and         $s0, $a2, $v1
    ctx->pc = 0x49db18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x49db1c: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x49db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x49db20: 0x3603ffff  ori         $v1, $s0, 0xFFFF
    ctx->pc = 0x49db20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x49db24: 0x922025  or          $a0, $a0, $s2
    ctx->pc = 0x49db24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x49db28: 0x648024  and         $s0, $v1, $a0
    ctx->pc = 0x49db28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49db2c: 0x2121024  and         $v0, $s0, $s2
    ctx->pc = 0x49db2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
    // 0x49db30: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49db30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49db34: 0xa4e20138  sh          $v0, 0x138($a3)
    ctx->pc = 0x49db34u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 312), (uint16_t)GPR_U32(ctx, 2));
    // 0x49db38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49db38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49db3c: 0xa470013a  sh          $s0, 0x13A($v1)
    ctx->pc = 0x49db3cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 314), (uint16_t)GPR_U32(ctx, 16));
    // 0x49db40: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x49db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49db44: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x49db44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x49db48: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x49db48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x49db4c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x49db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x49db50: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x49db50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x49db54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49db54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49db58: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49db58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49db5c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x49db5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x49db60: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x49db60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x49db64: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x49db64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x49db68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49db68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49db6c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x49db6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x49db70: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x49db70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x49db74: 0x440003e  bltz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x49DB74u;
    {
        const bool branch_taken_0x49db74 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x49DB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DB74u;
        // 0x49db78: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49db74) {
            ctx->pc = 0x49DC70u;
            goto label_49dc70;
        }
    }
    ctx->pc = 0x49DB7Cu;
    // 0x49db7c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49db80: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x49db80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x49db84: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x49db84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49db88: 0x24690ba4  addiu       $t1, $v1, 0xBA4
    ctx->pc = 0x49db88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 2980));
    // 0x49db8c: 0x24460b88  addiu       $a2, $v0, 0xB88
    ctx->pc = 0x49db8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2952));
    // 0x49db90: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x49db90u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49db94: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x49db94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49db98: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x49db98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x49db9c: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x49db9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_49dba0:
    // 0x49dba0: 0x106b0011  beq         $v1, $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x49DBA0u;
    {
        const bool branch_taken_0x49dba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        ctx->pc = 0x49DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DBA0u;
        // 0x49dba4: 0x246c0001  addiu       $t4, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dba0) {
            ctx->pc = 0x49DBE8u;
            goto label_49dbe8;
        }
    }
    ctx->pc = 0x49DBA8u;
    // 0x49dba8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x49dba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x49dbac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49DBACu;
    {
        const bool branch_taken_0x49dbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49dbac) {
            ctx->pc = 0x49DBC8u;
            goto label_49dbc8;
        }
    }
    ctx->pc = 0x49DBB4u;
    // 0x49dbb4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x49DBB4u;
    {
        const bool branch_taken_0x49dbb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DBB4u;
        // 0x49dbb8: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dbb4) {
            ctx->pc = 0x49DBD8u;
            goto label_49dbd8;
        }
    }
    ctx->pc = 0x49DBBCu;
    // 0x49dbbc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x49DBBCu;
    {
        const bool branch_taken_0x49dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DBBCu;
        // 0x49dbc0: 0x85020000  lh          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dbbc) {
            ctx->pc = 0x49DC28u;
            goto label_49dc28;
        }
    }
    ctx->pc = 0x49DBC4u;
    // 0x49dbc4: 0x0  nop
    ctx->pc = 0x49dbc4u;
    // NOP
label_49dbc8:
    // 0x49dbc8: 0x106a000f  beq         $v1, $t2, . + 4 + (0xF << 2)
    ctx->pc = 0x49DBC8u;
    {
        const bool branch_taken_0x49dbc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 10));
        ctx->pc = 0x49DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DBC8u;
        // 0x49dbcc: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dbc8) {
            ctx->pc = 0x49DC08u;
            goto label_49dc08;
        }
    }
    ctx->pc = 0x49DBD0u;
    // 0x49dbd0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x49DBD0u;
    {
        const bool branch_taken_0x49dbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DBD0u;
        // 0x49dbd4: 0x85020000  lh          $v0, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dbd0) {
            ctx->pc = 0x49DC28u;
            goto label_49dc28;
        }
    }
    ctx->pc = 0x49DBD8u;
label_49dbd8:
    // 0x49dbd8: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x49dbd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49dbdc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x49DBDCu;
    {
        const bool branch_taken_0x49dbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DBDCu;
        // 0x49dbe0: 0x2484013c  addiu       $a0, $a0, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 316));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dbdc) {
            ctx->pc = 0x49DC10u;
            goto label_49dc10;
        }
    }
    ctx->pc = 0x49DBE4u;
    // 0x49dbe4: 0x0  nop
    ctx->pc = 0x49dbe4u;
    // NOP
label_49dbe8:
    // 0x49dbe8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dbec: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x49dbecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49dbf0: 0x24840144  addiu       $a0, $a0, 0x144
    ctx->pc = 0x49dbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 324));
    // 0x49dbf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49dbf8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x49dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x49dbfc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49dbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49dc00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x49DC00u;
    {
        const bool branch_taken_0x49dc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC00u;
        // 0x49dc04: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dc00) {
            ctx->pc = 0x49DC1Cu;
            goto label_49dc1c;
        }
    }
    ctx->pc = 0x49DC08u;
label_49dc08:
    // 0x49dc08: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x49dc08u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49dc0c: 0x24840144  addiu       $a0, $a0, 0x144
    ctx->pc = 0x49dc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 324));
label_49dc10:
    // 0x49dc10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49dc14: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x49dc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x49dc18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49dc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_49dc1c:
    // 0x49dc1c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x49dc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x49dc20: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x49dc20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x49dc24: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x49dc24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_49dc28:
    // 0x49dc28: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x49dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49dc2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49dc30: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x49dc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49dc34: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x49dc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x49dc38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49dc38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49dc3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49dc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49dc40: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x49dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49dc44: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x49dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x49dc48: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49dc48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49dc4c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49dc4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49dc50: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x49dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x49dc54: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x49dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x49dc58: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x49dc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x49dc5c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49dc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49dc60: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x49dc60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x49dc64: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x49dc64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49dc68: 0x441ffcd  bgez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x49DC68u;
    {
        const bool branch_taken_0x49dc68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x49DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DC68u;
        // 0x49dc6c: 0x180182d  daddu       $v1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dc68) {
            ctx->pc = 0x49DBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49dba0;
        }
    }
    ctx->pc = 0x49DC70u;
label_49dc70:
    // 0x49dc70: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dc74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x49dc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49dc78: 0x95a20b84  lhu         $v0, 0xB84($t5)
    ctx->pc = 0x49dc78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 2948)));
    // 0x49dc7c: 0x2406c001  addiu       $a2, $zero, -0x3FFF
    ctx->pc = 0x49dc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950913));
    // 0x49dc80: 0x2484013c  addiu       $a0, $a0, 0x13C
    ctx->pc = 0x49dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 316));
    // 0x49dc84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49dc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49dc88: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49dc8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49dc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49dc90: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x49dc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x49dc94: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49dc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49dc98: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49dc98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x49dc9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dca0: 0xa4400118  sh          $zero, 0x118($v0)
    ctx->pc = 0x49dca0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x49dca4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dca8: 0xa460011a  sh          $zero, 0x11A($v1)
    ctx->pc = 0x49dca8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 282), (uint16_t)GPR_U32(ctx, 0));
    // 0x49dcac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dcb0: 0xa440011c  sh          $zero, 0x11C($v0)
    ctx->pc = 0x49dcb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 284), (uint16_t)GPR_U32(ctx, 0));
    // 0x49dcb4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dcb8: 0xa460011e  sh          $zero, 0x11E($v1)
    ctx->pc = 0x49dcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 286), (uint16_t)GPR_U32(ctx, 0));
    // 0x49dcbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dcc0: 0xa4400120  sh          $zero, 0x120($v0)
    ctx->pc = 0x49dcc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x49dcc4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dcc8: 0xa4600122  sh          $zero, 0x122($v1)
    ctx->pc = 0x49dcc8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 290), (uint16_t)GPR_U32(ctx, 0));
    // 0x49dccc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dcd0: 0xa4400022  sh          $zero, 0x22($v0)
    ctx->pc = 0x49dcd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x49dcd4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dcd8: 0xa4740024  sh          $s4, 0x24($v1)
    ctx->pc = 0x49dcd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 36), (uint16_t)GPR_U32(ctx, 20));
    // 0x49dcdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dce0: 0xa4400026  sh          $zero, 0x26($v0)
    ctx->pc = 0x49dce0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x49dce4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dce8: 0xa4740028  sh          $s4, 0x28($v1)
    ctx->pc = 0x49dce8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 40), (uint16_t)GPR_U32(ctx, 20));
    // 0x49dcec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dcf0: 0xa440002a  sh          $zero, 0x2A($v0)
    ctx->pc = 0x49dcf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x49dcf4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dcf8: 0xa474002c  sh          $s4, 0x2C($v1)
    ctx->pc = 0x49dcf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 20));
    // 0x49dcfc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x49dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dd00: 0xa445002e  sh          $a1, 0x2E($v0)
    ctx->pc = 0x49dd00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 5));
    // 0x49dd04: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x49dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49dd08: 0x1000fed7  b           . + 4 + (-0x129 << 2)
    ctx->pc = 0x49DD08u;
    {
        const bool branch_taken_0x49dd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD08u;
        // 0x49dd0c: 0xa4660030  sh          $a2, 0x30($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dd08) {
            ctx->pc = 0x49D868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49d868;
        }
    }
    ctx->pc = 0x49DD10u;
label_49dd10:
    // 0x49dd10: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x49dd10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49dd14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x49dd14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49dd18: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x49dd18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49dd1c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x49dd1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49dd20: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x49dd20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49dd24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x49dd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49dd28: 0x3e00008  jr          $ra
    ctx->pc = 0x49DD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49DD28u;
        // 0x49dd2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49DD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49DD30u;
}
