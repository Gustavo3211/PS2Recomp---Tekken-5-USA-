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

// Function: sub_0031F328
// Address: 0x31f328 - 0x31f5b0
void sub_0031F328_0x31f328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F328_0x31f328");
#endif

    switch (ctx->pc) {
        case 0x31f344u: goto label_31f344;
        default: break;
    }

    ctx->pc = 0x31f328u;

    // 0x31f328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31f328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31f32c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31f32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31f330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31f330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f334: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31f338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31f338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31f33c: 0xc0c7d6c  jal         func_31F5B0
    ctx->pc = 0x31F33Cu;
    SET_GPR_U32(ctx, 31, 0x31F344u);
    ctx->pc = 0x31F340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F33Cu;
    // 0x31f340: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F5B0u, 0x31F33Cu, 0x31F344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F344u;
label_31f344:
    // 0x31f344: 0x96020410  lhu         $v0, 0x410($s0)
    ctx->pc = 0x31f344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x31f348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31f348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f34c: 0x96060412  lhu         $a2, 0x412($s0)
    ctx->pc = 0x31f34cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1042)));
    // 0x31f350: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x31f350u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
    // 0x31f354: 0x96030416  lhu         $v1, 0x416($s0)
    ctx->pc = 0x31f354u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1046)));
    // 0x31f358: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31f358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31f35c: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x31f35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x31f360: 0xae050418  sw          $a1, 0x418($s0)
    ctx->pc = 0x31f360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 5));
    // 0x31f364: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31f364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31f368: 0xa6040404  sh          $a0, 0x404($s0)
    ctx->pc = 0x31f368u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1028), (uint16_t)GPR_U32(ctx, 4));
    // 0x31f36c: 0xa6020408  sh          $v0, 0x408($s0)
    ctx->pc = 0x31f36cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1032), (uint16_t)GPR_U32(ctx, 2));
    // 0x31f370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f374: 0xa6000406  sh          $zero, 0x406($s0)
    ctx->pc = 0x31f374u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1030), (uint16_t)GPR_U32(ctx, 0));
    // 0x31f378: 0x25440400  addiu       $a0, $t2, 0x400
    ctx->pc = 0x31f378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1024));
    // 0x31f37c: 0xa6030416  sh          $v1, 0x416($s0)
    ctx->pc = 0x31f37cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1046), (uint16_t)GPR_U32(ctx, 3));
    // 0x31f380: 0x34059000  ori         $a1, $zero, 0x9000
    ctx->pc = 0x31f380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x31f384: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31f384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x31f388: 0xa6060402  sh          $a2, 0x402($s0)
    ctx->pc = 0x31f388u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1026), (uint16_t)GPR_U32(ctx, 6));
    // 0x31f38c: 0xa6000400  sh          $zero, 0x400($s0)
    ctx->pc = 0x31f38cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1024), (uint16_t)GPR_U32(ctx, 0));
    // 0x31f390: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x31f390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x31f394: 0x24c7ffe0  addiu       $a3, $a2, -0x20
    ctx->pc = 0x31f394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x31f398: 0xac870018  sw          $a3, 0x18($a0)
    ctx->pc = 0x31f398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
    // 0x31f39c: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x31f39cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x31f3a0: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x31f3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x31f3a4: 0x2488003c  addiu       $t0, $a0, 0x3C
    ctx->pc = 0x31f3a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x31f3a8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31f3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31f3ac: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x31f3acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31f3b0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x31f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x31f3b4: 0xe51824  and         $v1, $a3, $a1
    ctx->pc = 0x31f3b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x31f3b8: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x31f3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x31f3bc: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F3BCu;
    {
        const bool branch_taken_0x31f3bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x31F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F3BCu;
        // 0x31f3c0: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f3bc) {
            ctx->pc = 0x31F3D8u;
            goto label_31f3d8;
        }
    }
    ctx->pc = 0x31F3C4u;
    // 0x31f3c4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f3c8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f3cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31F3CCu;
    {
        const bool branch_taken_0x31f3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F3CCu;
        // 0x31f3d0: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f3cc) {
            ctx->pc = 0x31F3E8u;
            goto label_31f3e8;
        }
    }
    ctx->pc = 0x31F3D4u;
    // 0x31f3d4: 0x0  nop
    ctx->pc = 0x31f3d4u;
    // NOP
label_31f3d8:
    // 0x31f3d8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31f3dc: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f3e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f3e4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x31f3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_31f3e8:
    // 0x31f3e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f3ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31f3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f3f0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x31f3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x31f3f4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31f3f8: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x31f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x31f3fc: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31f3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31f400: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F400u;
    {
        const bool branch_taken_0x31f400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31f400) {
            ctx->pc = 0x31F404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F400u;
            // 0x31f404: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F418u;
            goto label_31f418;
        }
    }
    ctx->pc = 0x31F408u;
    // 0x31f408: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f40c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f410: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31F410u;
    {
        const bool branch_taken_0x31f410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F410u;
        // 0x31f414: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f410) {
            ctx->pc = 0x31F424u;
            goto label_31f424;
        }
    }
    ctx->pc = 0x31F418u;
label_31f418:
    // 0x31f418: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f41c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f420: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31f420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31f424:
    // 0x31f424: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f428: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31f428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f42c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f42cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f430: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31f430u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31f434: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x31f434u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x31f438: 0x3c090044  lui         $t1, 0x44
    ctx->pc = 0x31f438u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)68 << 16));
    // 0x31f43c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31f440: 0x252408c0  addiu       $a0, $t1, 0x8C0
    ctx->pc = 0x31f440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2240));
    // 0x31f444: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31f444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31f448: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31F448u;
    {
        const bool branch_taken_0x31f448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F448u;
        // 0x31f44c: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f448) {
            ctx->pc = 0x31F468u;
            goto label_31f468;
        }
    }
    ctx->pc = 0x31F450u;
    // 0x31f450: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f454: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x31f454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x31f458: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31f458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31f45c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31F45Cu;
    {
        const bool branch_taken_0x31f45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F45Cu;
        // 0x31f460: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f45c) {
            ctx->pc = 0x31F47Cu;
            goto label_31f47c;
        }
    }
    ctx->pc = 0x31F464u;
    // 0x31f464: 0x0  nop
    ctx->pc = 0x31f464u;
    // NOP
label_31f468:
    // 0x31f468: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31f468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31f46c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x31f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x31f470: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31f470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31f474: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f478: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31f478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31f47c:
    // 0x31f47c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f480: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31f480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f484: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f488: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31f488u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31f48c: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x31f48cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x31f490: 0x25430400  addiu       $v1, $t2, 0x400
    ctx->pc = 0x31f490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 1024));
    // 0x31f494: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x31f494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x31f498: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x31f498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x31f49c: 0x34049000  ori         $a0, $zero, 0x9000
    ctx->pc = 0x31f49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36864);
    // 0x31f4a0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x31f4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x31f4a4: 0x24c7ffe0  addiu       $a3, $a2, -0x20
    ctx->pc = 0x31f4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x31f4a8: 0xac670018  sw          $a3, 0x18($v1)
    ctx->pc = 0x31f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 7));
    // 0x31f4ac: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x31f4acu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x31f4b0: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x31f4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x31f4b4: 0x2468003c  addiu       $t0, $v1, 0x3C
    ctx->pc = 0x31f4b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x31f4b8: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31f4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31f4bc: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x31f4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x31f4c0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x31f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x31f4c4: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x31f4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x31f4c8: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x31f4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x31f4cc: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F4CCu;
    {
        const bool branch_taken_0x31f4cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x31F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4CCu;
        // 0x31f4d0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f4cc) {
            ctx->pc = 0x31F4E8u;
            goto label_31f4e8;
        }
    }
    ctx->pc = 0x31F4D4u;
    // 0x31f4d4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f4d8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f4dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31F4DCu;
    {
        const bool branch_taken_0x31f4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4DCu;
        // 0x31f4e0: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f4dc) {
            ctx->pc = 0x31F4F8u;
            goto label_31f4f8;
        }
    }
    ctx->pc = 0x31F4E4u;
    // 0x31f4e4: 0x0  nop
    ctx->pc = 0x31f4e4u;
    // NOP
label_31f4e8:
    // 0x31f4e8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31f4ec: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f4f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f4f4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x31f4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_31f4f8:
    // 0x31f4f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f4fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31f4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f500: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x31f500u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x31f504: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31f504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31f508: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x31f508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x31f50c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x31f50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x31f510: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F510u;
    {
        const bool branch_taken_0x31f510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31f510) {
            ctx->pc = 0x31F514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31F510u;
            // 0x31f514: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31F528u;
            goto label_31f528;
        }
    }
    ctx->pc = 0x31F518u;
    // 0x31f518: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f51c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f520: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31F520u;
    {
        const bool branch_taken_0x31f520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F520u;
        // 0x31f524: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f520) {
            ctx->pc = 0x31F534u;
            goto label_31f534;
        }
    }
    ctx->pc = 0x31F528u;
label_31f528:
    // 0x31f528: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x31f528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x31f52c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f530: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31f530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31f534:
    // 0x31f534: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f538: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31f538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f53c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f53cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f540: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31f540u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31f544: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x31f544u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x31f548: 0x252408c0  addiu       $a0, $t1, 0x8C0
    ctx->pc = 0x31f548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2240));
    // 0x31f54c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31f550: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x31f550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31f554: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F554u;
    {
        const bool branch_taken_0x31f554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F554u;
        // 0x31f558: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f554) {
            ctx->pc = 0x31F570u;
            goto label_31f570;
        }
    }
    ctx->pc = 0x31F55Cu;
    // 0x31f55c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x31f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x31f560: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x31f560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x31f564: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31f564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31f568: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31F568u;
    {
        const bool branch_taken_0x31f568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F568u;
        // 0x31f56c: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f568) {
            ctx->pc = 0x31F584u;
            goto label_31f584;
        }
    }
    ctx->pc = 0x31F570u;
label_31f570:
    // 0x31f570: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x31f570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x31f574: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x31f574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x31f578: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31f578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31f57c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f580: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31f580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_31f584:
    // 0x31f584: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31f584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31f588: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31f588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f58c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31f58cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31f590: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31f590u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31f594: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x31f594u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x31f598: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x31f598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x31f59c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31f59cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f5a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31f5a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31f5a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31f5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31f5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x31F5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F5A8u;
        // 0x31f5ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F5B0u;
}
