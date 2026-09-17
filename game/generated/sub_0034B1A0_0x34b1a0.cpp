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

// Function: sub_0034B1A0
// Address: 0x34b1a0 - 0x34b2d0
void sub_0034B1A0_0x34b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034B1A0_0x34b1a0");
#endif

    switch (ctx->pc) {
        case 0x34b210u: goto label_34b210;
        case 0x34b220u: goto label_34b220;
        case 0x34b238u: goto label_34b238;
        default: break;
    }

    ctx->pc = 0x34b1a0u;

    // 0x34b1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b1a4: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x34b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x34b1a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34b1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34b1ac: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x34b1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b1b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x34b1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34b1b4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x34b1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b1b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34b1bc: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x34b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x34b1c0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34b1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x34b1c4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x34b1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x34b1c8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x34b1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34b1cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x34b1ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x34b1d0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x34b1d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x34b1d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x34b1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x34b1d8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x34b1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x34b1dc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x34b1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x34b1e0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x34b1e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x34b1e4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x34b1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x34b1e8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x34b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x34b1ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x34b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x34b1f0: 0x2463d5e0  addiu       $v1, $v1, -0x2A20
    ctx->pc = 0x34b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956512));
    // 0x34b1f4: 0x2442cb00  addiu       $v0, $v0, -0x3500
    ctx->pc = 0x34b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953728));
    // 0x34b1f8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x34b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34b1fc: 0x24b00010  addiu       $s0, $a1, 0x10
    ctx->pc = 0x34b1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x34b200: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x34b200u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x34b204: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x34b204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x34b208: 0xc0cb5d6  jal         func_32D758
    ctx->pc = 0x34B208u;
    SET_GPR_U32(ctx, 31, 0x34B210u);
    ctx->pc = 0x34B20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B208u;
    // 0x34b20c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D758u, 0x34B208u, 0x34B210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B210u;
label_34b210:
    // 0x34b210: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34B210u;
    {
        const bool branch_taken_0x34b210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b210) {
            ctx->pc = 0x34B230u;
            goto label_34b230;
        }
    }
    ctx->pc = 0x34B218u;
    // 0x34b218: 0xc0cb5d8  jal         func_32D760
    ctx->pc = 0x34B218u;
    SET_GPR_U32(ctx, 31, 0x34B220u);
    ctx->pc = 0x32D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D760u, 0x34B218u, 0x34B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B220u;
label_34b220:
    // 0x34b220: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x34b220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x34b224: 0x3463100d  ori         $v1, $v1, 0x100D
    ctx->pc = 0x34b224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4109);
    // 0x34b228: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34B228u;
    {
        const bool branch_taken_0x34b228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B228u;
        // 0x34b22c: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b228) {
            ctx->pc = 0x34B244u;
            goto label_34b244;
        }
    }
    ctx->pc = 0x34B230u;
label_34b230:
    // 0x34b230: 0xc0cb5d8  jal         func_32D760
    ctx->pc = 0x34B230u;
    SET_GPR_U32(ctx, 31, 0x34B238u);
    ctx->pc = 0x32D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D760u, 0x34B230u, 0x34B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B238u;
label_34b238:
    // 0x34b238: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x34b238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x34b23c: 0x3463100d  ori         $v1, $v1, 0x100D
    ctx->pc = 0x34b23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4109);
    // 0x34b240: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34b240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_34b244:
    // 0x34b244: 0x2173a  dsrl        $v0, $v0, 28
    ctx->pc = 0x34b244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 28);
    // 0x34b248: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34b248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34b24c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x34b24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x34b250: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x34b250u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x34b254: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x34b254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x34b258: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x34b258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x34b25c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x34b25cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34b260: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x34b260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x34b264: 0x24080060  addiu       $t0, $zero, 0x60
    ctx->pc = 0x34b264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x34b268: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x34b268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x34b26c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x34b26cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x34b270: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x34b270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x34b274: 0xde2200f0  ld          $v0, 0xF0($s1)
    ctx->pc = 0x34b274u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x34b278: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x34b278u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b27c: 0xfe070018  sd          $a3, 0x18($s0)
    ctx->pc = 0x34b27cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 7));
    // 0x34b280: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x34b280u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x34b284: 0xfe080020  sd          $t0, 0x20($s0)
    ctx->pc = 0x34b284u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 8));
    // 0x34b288: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x34b288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x34b28c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x34b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x34b290: 0x70663389  pcpyld      $a2, $v1, $a2
    ctx->pc = 0x34b290u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x34b294: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x34b294u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
    // 0x34b298: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34b298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x34b29c: 0x26050048  addiu       $a1, $s0, 0x48
    ctx->pc = 0x34b29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x34b2a0: 0x8c430dd4  lw          $v1, 0xDD4($v0)
    ctx->pc = 0x34b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400DD4u));
    // 0x34b2a4: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x34b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x34b2a8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x34b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x34b2ac: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x34b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x34b2b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b2b4: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x34b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x34b2b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34b2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b2bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x34b2bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b2c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x34b2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34b2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x34B2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B2C4u;
        // 0x34b2c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B2CCu;
    // 0x34b2cc: 0x0  nop
    ctx->pc = 0x34b2ccu;
    // NOP
    ctx->pc = 0x34b2d0u;
}
