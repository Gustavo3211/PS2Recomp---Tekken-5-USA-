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

// Function: sub_004CF360
// Address: 0x4cf360 - 0x4cf5e0
void sub_004CF360_0x4cf360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF360_0x4cf360");
#endif

    switch (ctx->pc) {
        case 0x4cf38cu: goto label_4cf38c;
        case 0x4cf3a8u: goto label_4cf3a8;
        case 0x4cf3d8u: goto label_4cf3d8;
        case 0x4cf4ccu: goto label_4cf4cc;
        case 0x4cf4d4u: goto label_4cf4d4;
        case 0x4cf4dcu: goto label_4cf4dc;
        case 0x4cf514u: goto label_4cf514;
        case 0x4cf52cu: goto label_4cf52c;
        case 0x4cf588u: goto label_4cf588;
        case 0x4cf598u: goto label_4cf598;
        case 0x4cf5a8u: goto label_4cf5a8;
        case 0x4cf5b8u: goto label_4cf5b8;
        default: break;
    }

    ctx->pc = 0x4cf360u;

    // 0x4cf360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4cf360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4cf364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cf364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cf368: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cf368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4cf36c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4cf36cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf370: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cf370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cf374: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cf374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cf378: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cf378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cf37c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cf37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4cf380: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4cf380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4cf384: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4CF384u;
    SET_GPR_U32(ctx, 31, 0x4CF38Cu);
    ctx->pc = 0x4CF388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF384u;
    // 0x4cf388: 0x26b001b4  addiu       $s0, $s5, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4CF384u, 0x4CF38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF38Cu;
label_4cf38c:
    // 0x4cf38c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4cf38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4cf390: 0xac620fc8  sw          $v0, 0xFC8($v1)
    ctx->pc = 0x4cf390u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F0FC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0FC8u, _value); } while (0);
    // 0x4cf394: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4cf394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cf398: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4CF398u;
    {
        const bool branch_taken_0x4cf398 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4cf398) {
            ctx->pc = 0x4CF3D0u;
            goto label_4cf3d0;
        }
    }
    ctx->pc = 0x4CF3A0u;
    // 0x4cf3a0: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4CF3A0u;
    SET_GPR_U32(ctx, 31, 0x4CF3A8u);
    ctx->pc = 0x4CF3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF3A0u;
    // 0x4cf3a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4CF3A0u, 0x4CF3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF3A8u;
label_4cf3a8:
    // 0x4cf3a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4cf3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4cf3ac: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4cf3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4cf3b0: 0xa6a20148  sh          $v0, 0x148($s5)
    ctx->pc = 0x4cf3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 328), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cf3b4: 0xa6a30158  sh          $v1, 0x158($s5)
    ctx->pc = 0x4cf3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 344), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cf3b8: 0xa6a0015e  sh          $zero, 0x15E($s5)
    ctx->pc = 0x4cf3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cf3bc: 0xa6a00164  sh          $zero, 0x164($s5)
    ctx->pc = 0x4cf3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cf3c0: 0xa6a00166  sh          $zero, 0x166($s5)
    ctx->pc = 0x4cf3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cf3c4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4cf3c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cf3c8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4cf3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4cf3cc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4cf3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_4cf3d0:
    // 0x4cf3d0: 0xc12564a  jal         func_495928
    ctx->pc = 0x4CF3D0u;
    SET_GPR_U32(ctx, 31, 0x4CF3D8u);
    ctx->pc = 0x4CF3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF3D0u;
    // 0x4cf3d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4CF3D0u, 0x4CF3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF3D8u;
label_4cf3d8:
    // 0x4cf3d8: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x4CF3D8u;
    {
        const bool branch_taken_0x4cf3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF3D8u;
        // 0x4cf3dc: 0x3c11007f  lui         $s1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf3d8) {
            ctx->pc = 0x4CF5B8u;
            goto label_4cf5b8;
        }
    }
    ctx->pc = 0x4CF3E0u;
    // 0x4cf3e0: 0x86a201b6  lh          $v0, 0x1B6($s5)
    ctx->pc = 0x4cf3e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 438)));
    // 0x4cf3e4: 0x26310fb0  addiu       $s1, $s1, 0xFB0
    ctx->pc = 0x4cf3e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4016));
    // 0x4cf3e8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4cf3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf3ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4cf3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cf3f0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4cf3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4cf3f4: 0x26b4015e  addiu       $s4, $s5, 0x15E
    ctx->pc = 0x4cf3f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 350));
    // 0x4cf3f8: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4cf3f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4cf3fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf400: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4cf400u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4cf404: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf408: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4cf408u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4cf40c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cf40cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cf410: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf414: 0x25290fc4  addiu       $t1, $t1, 0xFC4
    ctx->pc = 0x4cf414u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4036));
    // 0x4cf418: 0x26520fbc  addiu       $s2, $s2, 0xFBC
    ctx->pc = 0x4cf418u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4028));
    // 0x4cf41c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4cf41cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cf420: 0x26730fc0  addiu       $s3, $s3, 0xFC0
    ctx->pc = 0x4cf420u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4032));
    // 0x4cf424: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4cf424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf428: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4cf428u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf42c: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x4cf42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x4cf430: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x4cf430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x4cf434: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4cf434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4cf438: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x4cf438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x4cf43c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf440: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x4cf440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf444: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cf444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cf448: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf44c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4cf44cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4cf450: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4cf450u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cf454: 0x26100fb4  addiu       $s0, $s0, 0xFB4
    ctx->pc = 0x4cf454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4020));
    // 0x4cf458: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cf458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cf45c: 0x21483  sra         $v0, $v0, 18
    ctx->pc = 0x4cf45cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 18));
    // 0x4cf460: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4cf460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4cf464: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf468: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cf468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cf46c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf470: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4cf470u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cf474: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x4cf474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x4cf478: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4cf478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4cf47c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf480: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cf480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cf484: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4cf484u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cf488: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4cf488u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cf48c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4cf48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cf490: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4cf490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cf494: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4cf494u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cf498: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cf498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cf49c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf4a0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4cf4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4cf4a4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4cf4a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4cf4a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4cf4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4cf4ac: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4cf4acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4cf4b0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4cf4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf4b4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4cf4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4cf4b8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4cf4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf4bc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4cf4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4cf4c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4cf4c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf4c4: 0xc127c58  jal         func_49F160
    ctx->pc = 0x4CF4C4u;
    SET_GPR_U32(ctx, 31, 0x4CF4CCu);
    ctx->pc = 0x4CF4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF4C4u;
    // 0x4cf4c8: 0xae680000  sw          $t0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F160u, 0x4CF4C4u, 0x4CF4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF4CCu;
label_4cf4cc:
    // 0x4cf4cc: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4CF4CCu;
    SET_GPR_U32(ctx, 31, 0x4CF4D4u);
    ctx->pc = 0x4CF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF4CCu;
    // 0x4cf4d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4CF4CCu, 0x4CF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF4D4u;
label_4cf4d4:
    // 0x4cf4d4: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4CF4D4u;
    SET_GPR_U32(ctx, 31, 0x4CF4DCu);
    ctx->pc = 0x4CF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF4D4u;
    // 0x4cf4d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4CF4D4u, 0x4CF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF4DCu;
label_4cf4dc:
    // 0x4cf4dc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4cf4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cf4e0: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4cf4e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cf4e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cf4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf4e8: 0x344205b2  ori         $v0, $v0, 0x5B2
    ctx->pc = 0x4cf4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1458);
    // 0x4cf4ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf4f0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4cf4f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4cf4f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf4f8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4cf4f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4cf4fc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4cf4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4cf500: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4cf500u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4cf504: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4cf504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf508: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4cf508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf50c: 0xc12b698  jal         func_4ADA60
    ctx->pc = 0x4CF50Cu;
    SET_GPR_U32(ctx, 31, 0x4CF514u);
    ctx->pc = 0x4CF510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF50Cu;
    // 0x4cf510: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA60u, 0x4CF50Cu, 0x4CF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF514u;
label_4cf514:
    // 0x4cf514: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4cf514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cf518: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4cf518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cf51c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4cf51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf520: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4cf520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf524: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4CF524u;
    SET_GPR_U32(ctx, 31, 0x4CF52Cu);
    ctx->pc = 0x4CF528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF524u;
    // 0x4cf528: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4CF524u, 0x4CF52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF52Cu;
label_4cf52c:
    // 0x4cf52c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4cf52cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cf530: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4cf530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4cf534: 0xa6a30168  sh          $v1, 0x168($s5)
    ctx->pc = 0x4cf534u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 360), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cf538: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4cf538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cf53c: 0xa6a2016a  sh          $v0, 0x16A($s5)
    ctx->pc = 0x4cf53cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 362), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cf540: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4cf540u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cf544: 0x10640012  beq         $v1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4CF544u;
    {
        const bool branch_taken_0x4cf544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4CF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF544u;
        // 0x4cf548: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf544) {
            ctx->pc = 0x4CF590u;
            goto label_4cf590;
        }
    }
    ctx->pc = 0x4CF54Cu;
    // 0x4cf54c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CF54Cu;
    {
        const bool branch_taken_0x4cf54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf54c) {
            ctx->pc = 0x4CF550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CF54Cu;
            // 0x4cf550: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CF568u;
            goto label_4cf568;
        }
    }
    ctx->pc = 0x4CF554u;
    // 0x4cf554: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4CF554u;
    {
        const bool branch_taken_0x4cf554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF554u;
        // 0x4cf558: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf554) {
            ctx->pc = 0x4CF580u;
            goto label_4cf580;
        }
    }
    ctx->pc = 0x4CF55Cu;
    // 0x4cf55c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4CF55Cu;
    {
        const bool branch_taken_0x4cf55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF55Cu;
        // 0x4cf560: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf55c) {
            ctx->pc = 0x4CF5C0u;
            goto label_4cf5c0;
        }
    }
    ctx->pc = 0x4CF564u;
    // 0x4cf564: 0x0  nop
    ctx->pc = 0x4cf564u;
    // NOP
label_4cf568:
    // 0x4cf568: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4CF568u;
    {
        const bool branch_taken_0x4cf568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF568u;
        // 0x4cf56c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf568) {
            ctx->pc = 0x4CF5A0u;
            goto label_4cf5a0;
        }
    }
    ctx->pc = 0x4CF570u;
    // 0x4cf570: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4CF570u;
    {
        const bool branch_taken_0x4cf570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF570u;
        // 0x4cf574: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf570) {
            ctx->pc = 0x4CF5B0u;
            goto label_4cf5b0;
        }
    }
    ctx->pc = 0x4CF578u;
    // 0x4cf578: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x4CF578u;
    {
        const bool branch_taken_0x4cf578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF578u;
        // 0x4cf57c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf578) {
            ctx->pc = 0x4CF5C0u;
            goto label_4cf5c0;
        }
    }
    ctx->pc = 0x4CF580u;
label_4cf580:
    // 0x4cf580: 0xc133d78  jal         func_4CF5E0
    ctx->pc = 0x4CF580u;
    SET_GPR_U32(ctx, 31, 0x4CF588u);
    ctx->pc = 0x4CF584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF580u;
    // 0x4cf584: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CF5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CF5E0u, 0x4CF580u, 0x4CF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF588u;
label_4cf588:
    // 0x4cf588: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4CF588u;
    {
        const bool branch_taken_0x4cf588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF588u;
        // 0x4cf58c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf588) {
            ctx->pc = 0x4CF5BCu;
            goto label_4cf5bc;
        }
    }
    ctx->pc = 0x4CF590u;
label_4cf590:
    // 0x4cf590: 0xc133d90  jal         func_4CF640
    ctx->pc = 0x4CF590u;
    SET_GPR_U32(ctx, 31, 0x4CF598u);
    ctx->pc = 0x4CF594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF590u;
    // 0x4cf594: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CF640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CF640u, 0x4CF590u, 0x4CF598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF598u;
label_4cf598:
    // 0x4cf598: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4CF598u;
    {
        const bool branch_taken_0x4cf598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF598u;
        // 0x4cf59c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf598) {
            ctx->pc = 0x4CF5BCu;
            goto label_4cf5bc;
        }
    }
    ctx->pc = 0x4CF5A0u;
label_4cf5a0:
    // 0x4cf5a0: 0xc133db4  jal         func_4CF6D0
    ctx->pc = 0x4CF5A0u;
    SET_GPR_U32(ctx, 31, 0x4CF5A8u);
    ctx->pc = 0x4CF5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF5A0u;
    // 0x4cf5a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CF6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CF6D0u, 0x4CF5A0u, 0x4CF5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF5A8u;
label_4cf5a8:
    // 0x4cf5a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CF5A8u;
    {
        const bool branch_taken_0x4cf5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF5A8u;
        // 0x4cf5ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf5a8) {
            ctx->pc = 0x4CF5BCu;
            goto label_4cf5bc;
        }
    }
    ctx->pc = 0x4CF5B0u;
label_4cf5b0:
    // 0x4cf5b0: 0xc133dcc  jal         func_4CF730
    ctx->pc = 0x4CF5B0u;
    SET_GPR_U32(ctx, 31, 0x4CF5B8u);
    ctx->pc = 0x4CF5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF5B0u;
    // 0x4cf5b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CF730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CF730u, 0x4CF5B0u, 0x4CF5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF5B8u;
label_4cf5b8:
    // 0x4cf5b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cf5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cf5bc:
    // 0x4cf5bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cf5bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4cf5c0:
    // 0x4cf5c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cf5c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cf5c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cf5c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cf5c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cf5c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cf5cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cf5ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cf5d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4cf5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cf5d4: 0x3e00008  jr          $ra
    ctx->pc = 0x4CF5D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CF5D4u;
        // 0x4cf5d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CF5D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CF5DCu;
    // 0x4cf5dc: 0x0  nop
    ctx->pc = 0x4cf5dcu;
    // NOP
    ctx->pc = 0x4cf5e0u;
}
