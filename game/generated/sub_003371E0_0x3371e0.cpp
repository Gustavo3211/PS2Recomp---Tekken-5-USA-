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

// Function: sub_003371E0
// Address: 0x3371e0 - 0x337340
void sub_003371E0_0x3371e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003371E0_0x3371e0");
#endif

    switch (ctx->pc) {
        case 0x33723cu: goto label_33723c;
        case 0x337250u: goto label_337250;
        case 0x337278u: goto label_337278;
        case 0x337290u: goto label_337290;
        case 0x3372acu: goto label_3372ac;
        case 0x33730cu: goto label_33730c;
        default: break;
    }

    ctx->pc = 0x3371e0u;

    // 0x3371e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3371e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3371e4: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x3371e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x3371e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3371e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3371ec: 0x3c140044  lui         $s4, 0x44
    ctx->pc = 0x3371ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)68 << 16));
    // 0x3371f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3371f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3371f4: 0x26910a60  addiu       $s1, $s4, 0xA60
    ctx->pc = 0x3371f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 2656));
    // 0x3371f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3371f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x440A68u));
    // 0x3371fc: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x3371fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x337200: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x337200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x337204: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x337204u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33720c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33720cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x337210: 0x4610043  bgez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x337210u;
    {
        const bool branch_taken_0x337210 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x337214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337210u;
        // 0x337214: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337210) {
            ctx->pc = 0x337320u;
            goto label_337320;
        }
    }
    ctx->pc = 0x337218u;
    // 0x337218: 0x3c12001c  lui         $s2, 0x1C
    ctx->pc = 0x337218u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)28 << 16));
    // 0x33721c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33721cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337220: 0x26508500  addiu       $s0, $s2, -0x7B00
    ctx->pc = 0x337220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935808));
    // 0x337224: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x337224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x337228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33722c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x33722cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x337230: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x337230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x337234: 0xc04a151  jal         func_128544
    ctx->pc = 0x337234u;
    SET_GPR_U32(ctx, 31, 0x33723Cu);
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x337234u, 0x33723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33723Cu;
label_33723c:
    // 0x33723c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x33723cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x337240: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x337240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x337244: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x337244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x337248: 0x26101fc0  addiu       $s0, $s0, 0x1FC0
    ctx->pc = 0x337248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x33724c: 0x0  nop
    ctx->pc = 0x33724cu;
    // NOP
label_337250:
    // 0x337250: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x337250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x337254: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x337254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x337258: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x337258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x33725c: 0x0  nop
    ctx->pc = 0x33725cu;
    // NOP
    // 0x337260: 0x0  nop
    ctx->pc = 0x337260u;
    // NOP
    // 0x337264: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x337264u;
    {
        const bool branch_taken_0x337264 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x337268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337264u;
        // 0x337268: 0x2463ffc0  addiu       $v1, $v1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337264) {
            ctx->pc = 0x337250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337250;
        }
    }
    ctx->pc = 0x33726Cu;
    // 0x33726c: 0x26428500  addiu       $v0, $s2, -0x7B00
    ctx->pc = 0x33726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935808));
    // 0x337270: 0xc0ce116  jal         func_338458
    ctx->pc = 0x337270u;
    SET_GPR_U32(ctx, 31, 0x337278u);
    ctx->pc = 0x337274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337270u;
    // 0x337274: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338458u, 0x337270u, 0x337278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337278u;
label_337278:
    // 0x337278: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x337278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x33727c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x33727cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x337280: 0x24a57718  addiu       $a1, $a1, 0x7718
    ctx->pc = 0x337280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30488));
    // 0x337284: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337288: 0xc043c24  jal         func_10F090
    ctx->pc = 0x337288u;
    SET_GPR_U32(ctx, 31, 0x337290u);
    ctx->pc = 0x33728Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337288u;
    // 0x33728c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F090u, 0x337288u, 0x337290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337290u;
label_337290:
    // 0x337290: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x337290u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337294: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x337294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x337298: 0x4600021  bltz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x337298u;
    {
        const bool branch_taken_0x337298 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337298u;
        // 0x33729c: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337298) {
            ctx->pc = 0x337320u;
            goto label_337320;
        }
    }
    ctx->pc = 0x3372A0u;
    // 0x3372a0: 0x26820a60  addiu       $v0, $s4, 0xA60
    ctx->pc = 0x3372a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 2656));
    // 0x3372a4: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x3372A4u;
    SET_GPR_U32(ctx, 31, 0x3372ACu);
    ctx->pc = 0x3372A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3372A4u;
    // 0x3372a8: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x3372A4u, 0x3372ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3372ACu;
label_3372ac:
    // 0x3372ac: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x3372acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x3372b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3372b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3372b4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3372b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3372b8: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x3372b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    // 0x3372bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3372bcu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10000810u)); // MMIO: 0x10000810
    // 0x3372c0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3372c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3372c4: 0x732825  or          $a1, $v1, $s3
    ctx->pc = 0x3372c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x3372c8: 0x34a50300  ori         $a1, $a1, 0x300
    ctx->pc = 0x3372c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x3372cc: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x3372ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x3372d0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3372D0u;
    {
        const bool branch_taken_0x3372d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3372D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372D0u;
        // 0x3372d4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3372d0) {
            ctx->pc = 0x3372FCu;
            goto label_3372fc;
        }
    }
    ctx->pc = 0x3372D8u;
    // 0x3372d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3372d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3372dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3372dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3372e0: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3372e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x3372e4: 0x34630820  ori         $v1, $v1, 0x820
    ctx->pc = 0x3372e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2080);
    // 0x3372e8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x3372e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3372ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3372ecu;
    runtime->Store32(rdram, ctx, 0x10000800u, GPR_U32(ctx, 0)); // MMIO: 0x10000800
    // 0x3372f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3372f0u;
    runtime->Store32(rdram, ctx, 0x10000820u, GPR_U32(ctx, 4)); // MMIO: 0x10000820
    // 0x3372f4: 0x34a50c80  ori         $a1, $a1, 0xC80
    ctx->pc = 0x3372f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3200);
    // 0x3372f8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3372f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3372fc:
    // 0x3372fc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3372fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x337300: 0xac250810  sw          $a1, 0x810($at)
    ctx->pc = 0x337300u;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 5)); // MMIO: 0x10000810
    // 0x337304: 0xc043fba  jal         func_10FEE8
    ctx->pc = 0x337304u;
    SET_GPR_U32(ctx, 31, 0x33730Cu);
    ctx->pc = 0x10FEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FEE8u, 0x337304u, 0x33730Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33730Cu;
label_33730c:
    // 0x33730c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33730Cu;
    {
        const bool branch_taken_0x33730c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x337310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33730Cu;
        // 0x337310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33730c) {
            ctx->pc = 0x337320u;
            goto label_337320;
        }
    }
    ctx->pc = 0x337314u;
    // 0x337314: 0xf  sync
    ctx->pc = 0x337314u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x337318: 0x42000038  ei
    ctx->pc = 0x337318u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x33731c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33731cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337320:
    // 0x337320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337324: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337324u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337328: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x337328u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33732c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33732cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x337330: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x337330u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337334: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x337334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x337338: 0x3e00008  jr          $ra
    ctx->pc = 0x337338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337338u;
        // 0x33733c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337340u;
}
