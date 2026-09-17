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

// Function: sub_004F38D0
// Address: 0x4f38d0 - 0x4f3a50
void sub_004F38D0_0x4f38d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F38D0_0x4f38d0");
#endif

    switch (ctx->pc) {
        case 0x4f3908u: goto label_4f3908;
        case 0x4f3958u: goto label_4f3958;
        case 0x4f3998u: goto label_4f3998;
        case 0x4f39a0u: goto label_4f39a0;
        case 0x4f39acu: goto label_4f39ac;
        default: break;
    }

    ctx->pc = 0x4f38d0u;

    // 0x4f38d0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x4f38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x4f38d4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f38d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4f38d8: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f38d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f38dc: 0x24428188  addiu       $v0, $v0, -0x7E78
    ctx->pc = 0x4f38dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934920));
    // 0x4f38e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f38e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f38e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f38e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f38e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f38e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f38ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4f38ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f38f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f38f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f38f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f38f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f38f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4f38f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4f38fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4f38fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4f3900: 0xc124c7c  jal         func_4931F0
    ctx->pc = 0x4F3900u;
    SET_GPR_U32(ctx, 31, 0x4F3908u);
    ctx->pc = 0x4F3904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3900u;
    // 0x4f3904: 0xac621250  sw          $v0, 0x1250($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4688), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4931F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4931F0u, 0x4F3900u, 0x4F3908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3908u;
label_4f3908:
    // 0x4f3908: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f3908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f390c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4f390cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4f3910: 0x24711230  addiu       $s1, $v1, 0x1230
    ctx->pc = 0x4f3910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4656));
    // 0x4f3914: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4f3914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3918: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4f3918u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F1230u));
    // 0x4f391c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4f391cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4f3920: 0x94871248  lhu         $a3, 0x1248($a0)
    ctx->pc = 0x4f3920u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x7F1248u));
    // 0x4f3924: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4f3924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f3928: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4f3928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4f392c: 0x24d01244  addiu       $s0, $a2, 0x1244
    ctx->pc = 0x4f392cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 4676));
    // 0x4f3930: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4f3930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4f3934: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4f3934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4f3938: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4f3938u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f393c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f393cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4f3940: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f3940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4f3944: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f3944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f3948: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x4f3948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4f394c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4f394cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4f3950: 0xc13e412  jal         func_4F9048
    ctx->pc = 0x4F3950u;
    SET_GPR_U32(ctx, 31, 0x4F3958u);
    ctx->pc = 0x4F3954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3950u;
    // 0x4f3954: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9048u, 0x4F3950u, 0x4F3958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F3958u;
label_4f3958:
    // 0x4f3958: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f3958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f395c: 0x2465124c  addiu       $a1, $v1, 0x124C
    ctx->pc = 0x4f395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4684));
    // 0x4f3960: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4f3960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4f3964: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4f3964u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F124Cu));
    // 0x4f3968: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x4f3968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x4f396c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f396cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4f3970: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f3970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f3974: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4f3974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4f3978: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f3978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f397c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4f397cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f3980: 0x4400029  bltz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x4F3980u;
    {
        const bool branch_taken_0x4f3980 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3980u;
        // 0x4f3984: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3980) {
            ctx->pc = 0x4F3A28u;
            goto label_4f3a28;
        }
    }
    ctx->pc = 0x4F3988u;
    // 0x4f3988: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x4f3988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f398c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4f398cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f3990: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4f3990u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4f3994: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4f3994u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_4f3998:
    // 0x4f3998: 0xc13cf06  jal         func_4F3C18
    ctx->pc = 0x4F3998u;
    SET_GPR_U32(ctx, 31, 0x4F39A0u);
    ctx->pc = 0x4F399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F3998u;
    // 0x4f399c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F3C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F3C18u, 0x4F3998u, 0x4F39A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F39A0u;
label_4f39a0:
    // 0x4f39a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4f39a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4f39a4: 0xc13e412  jal         func_4F9048
    ctx->pc = 0x4F39A4u;
    SET_GPR_U32(ctx, 31, 0x4F39ACu);
    ctx->pc = 0x4F39A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F39A4u;
    // 0x4f39a8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9048u, 0x4F39A4u, 0x4F39ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F39ACu;
label_4f39ac:
    // 0x4f39ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f39acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f39b0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4f39b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4f39b4: 0x8ea5125c  lw          $a1, 0x125C($s5)
    ctx->pc = 0x4f39b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4700)));
    // 0x4f39b8: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4f39b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4f39bc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f39bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4f39c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4f39c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4f39c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f39c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f39c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f39c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f39cc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f39ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f39d0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4f39d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4f39d4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f39d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f39d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f39d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f39dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f39dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f39e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f39e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f39e4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f39e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f39e8: 0x244206cb  addiu       $v0, $v0, 0x6CB
    ctx->pc = 0x4f39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1739));
    // 0x4f39ec: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4f39ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4f39f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f39f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f39f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4f39f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4f39f8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4f39f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f39fc: 0xa4a2000c  sh          $v0, 0xC($a1)
    ctx->pc = 0x4f39fcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f3a00: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4f3a00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f3a04: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4f3a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f3a08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4f3a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4f3a0c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f3a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f3a10: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4f3a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4f3a14: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4f3a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4f3a18: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4f3a18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4f3a1c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4f3a1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4f3a20: 0x441ffdd  bgez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x4F3A20u;
    {
        const bool branch_taken_0x4f3a20 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4f3a20) {
            ctx->pc = 0x4F3998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4f3998;
        }
    }
    ctx->pc = 0x4F3A28u;
label_4f3a28:
    // 0x4f3a28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f3a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f3a2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f3a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f3a30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f3a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f3a34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f3a34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f3a38: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f3a38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f3a3c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4f3a3cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f3a40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4f3a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4f3a44: 0x3e00008  jr          $ra
    ctx->pc = 0x4F3A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3A44u;
        // 0x4f3a48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3A4Cu;
    // 0x4f3a4c: 0x0  nop
    ctx->pc = 0x4f3a4cu;
    // NOP
    ctx->pc = 0x4f3a50u;
}
