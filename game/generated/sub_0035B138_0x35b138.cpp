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

// Function: sub_0035B138
// Address: 0x35b138 - 0x35b2e0
void sub_0035B138_0x35b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B138_0x35b138");
#endif

    switch (ctx->pc) {
        case 0x35b178u: goto label_35b178;
        case 0x35b180u: goto label_35b180;
        case 0x35b190u: goto label_35b190;
        case 0x35b1c0u: goto label_35b1c0;
        case 0x35b1d0u: goto label_35b1d0;
        case 0x35b1e8u: goto label_35b1e8;
        case 0x35b258u: goto label_35b258;
        case 0x35b28cu: goto label_35b28c;
        case 0x35b2a0u: goto label_35b2a0;
        case 0x35b2a8u: goto label_35b2a8;
        case 0x35b2b0u: goto label_35b2b0;
        default: break;
    }

    ctx->pc = 0x35b138u;

    // 0x35b138: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35b138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35b13c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35b140: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35b140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35b144: 0x24501350  addiu       $s0, $v0, 0x1350
    ctx->pc = 0x35b144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x35b148: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35b148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35b14c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35b14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b150: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35b150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x35b154: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x35b154u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x35b158: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x35b158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x35b15c: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x35b15cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x35b160: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x35b160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x35b164: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x35b164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b168: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x35b168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x35b16c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x35B16Cu;
    {
        const bool branch_taken_0x35b16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B16Cu;
        // 0x35b170: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b16c) {
            ctx->pc = 0x35B1ACu;
            goto label_35b1ac;
        }
    }
    ctx->pc = 0x35B174u;
    // 0x35b174: 0x0  nop
    ctx->pc = 0x35b174u;
    // NOP
label_35b178:
    // 0x35b178: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35B178u;
    SET_GPR_U32(ctx, 31, 0x35B180u);
    ctx->pc = 0x35B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B178u;
    // 0x35b17c: 0x26445308  addiu       $a0, $s2, 0x5308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 21256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35B178u, 0x35B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B180u;
label_35b180:
    // 0x35b180: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x35b180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35b184: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x35b184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x35b188: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x35b188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x35b18c: 0x0  nop
    ctx->pc = 0x35b18cu;
    // NOP
label_35b190:
    // 0x35b190: 0x0  nop
    ctx->pc = 0x35b190u;
    // NOP
    // 0x35b194: 0x0  nop
    ctx->pc = 0x35b194u;
    // NOP
    // 0x35b198: 0x0  nop
    ctx->pc = 0x35b198u;
    // NOP
    // 0x35b19c: 0x0  nop
    ctx->pc = 0x35b19cu;
    // NOP
    // 0x35b1a0: 0x0  nop
    ctx->pc = 0x35b1a0u;
    // NOP
    // 0x35b1a4: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35B1A4u;
    {
        const bool branch_taken_0x35b1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35b1a4) {
            ctx->pc = 0x35B1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B1A4u;
            // 0x35b1a8: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b190;
        }
    }
    ctx->pc = 0x35B1ACu;
label_35b1ac:
    // 0x35b1ac: 0x3c058100  lui         $a1, 0x8100
    ctx->pc = 0x35b1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33024 << 16));
    // 0x35b1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b1b4: 0x34a50201  ori         $a1, $a1, 0x201
    ctx->pc = 0x35b1b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)513);
    // 0x35b1b8: 0xc044bb4  jal         func_112ED0
    ctx->pc = 0x35B1B8u;
    SET_GPR_U32(ctx, 31, 0x35B1C0u);
    ctx->pc = 0x35B1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B1B8u;
    // 0x35b1bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112ED0u, 0x35B1B8u, 0x35B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B1C0u;
label_35b1c0:
    // 0x35b1c0: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35B1C0u;
    {
        const bool branch_taken_0x35b1c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x35b1c0) {
            ctx->pc = 0x35B1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B1C0u;
            // 0x35b1c4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B1D4u;
            goto label_35b1d4;
        }
    }
    ctx->pc = 0x35B1C8u;
    // 0x35b1c8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35B1C8u;
    SET_GPR_U32(ctx, 31, 0x35B1D0u);
    ctx->pc = 0x35B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B1C8u;
    // 0x35b1cc: 0x266452f0  addiu       $a0, $s3, 0x52F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 21232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35B1C8u, 0x35B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B1D0u;
label_35b1d0:
    // 0x35b1d0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x35b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_35b1d4:
    // 0x35b1d4: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x35B1D4u;
    {
        const bool branch_taken_0x35b1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B1D4u;
        // 0x35b1d8: 0x3c150048  lui         $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b1d4) {
            ctx->pc = 0x35B178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b178;
        }
    }
    ctx->pc = 0x35B1DCu;
    // 0x35b1dc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35b1e0: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35B1E0u;
    SET_GPR_U32(ctx, 31, 0x35B1E8u);
    ctx->pc = 0x35B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B1E0u;
    // 0x35b1e4: 0x24845320  addiu       $a0, $a0, 0x5320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35B1E0u, 0x35B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B1E8u;
label_35b1e8:
    // 0x35b1e8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35b1ec: 0x24421320  addiu       $v0, $v0, 0x1320
    ctx->pc = 0x35b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
    // 0x35b1f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b1f4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x35b1f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b1f8: 0x26271000  addiu       $a3, $s1, 0x1000
    ctx->pc = 0x35b1f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4096));
    // 0x35b1fc: 0x26860400  addiu       $a2, $s4, 0x400
    ctx->pc = 0x35b1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
    // 0x35b200: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x35b200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35b204: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x35b204u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x1D1324u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D1324u, _value); } while (0);
    // 0x35b208: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x35b208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x35b20c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x35b20cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1D1348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D1348u, _value); } while (0);
    // 0x35b210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35b210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b214: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x35b214u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1D133Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D133Cu, _value); } while (0);
    // 0x35b218: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35b218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b21c: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x35b21cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1D1344u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D1344u, _value); } while (0);
    // 0x35b220: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x35b220u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x35b224: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x35b224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x1D1328u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D1328u, _value); } while (0);
    // 0x35b228: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x35b228u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x35b22c: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x35b22cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x1D1330u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D1330u, _value); } while (0);
    // 0x35b230: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x35b230u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1D1334u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D1334u, _value); } while (0);
    // 0x35b234: 0xac54000c  sw          $s4, 0xC($v0)
    ctx->pc = 0x35b234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x1D132Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D132Cu, _value); } while (0);
    // 0x35b238: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x35b238u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D1338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D1338u, _value); } while (0);
    // 0x35b23c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x35b23cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D1320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D1320u, _value); } while (0);
    // 0x35b240: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x35b240u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D134Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D134Cu, _value); } while (0);
    // 0x35b244: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x35b244u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x35b248: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x35b248u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D1340u));
    // 0x35b24c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x35b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x35b250: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x35b250u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1D1338u));
    // 0x35b254: 0x0  nop
    ctx->pc = 0x35b254u;
    // NOP
label_35b258:
    // 0x35b258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35b258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b25c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35b25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b260: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35b260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b264: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35b264u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35b268: 0x24081000  addiu       $t0, $zero, 0x1000
    ctx->pc = 0x35b268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x35b26c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x35b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35b270: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x35b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x35b274: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x35b274u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b278: 0x240a0400  addiu       $t2, $zero, 0x400
    ctx->pc = 0x35b278u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x35b27c: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x35b27cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b280: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x35b280u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b284: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x35B284u;
    SET_GPR_U32(ctx, 31, 0x35B28Cu);
    ctx->pc = 0x35B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B284u;
    // 0x35b288: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x35B284u, 0x35B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B28Cu;
label_35b28c:
    // 0x35b28c: 0x26a45338  addiu       $a0, $s5, 0x5338
    ctx->pc = 0x35b28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 21304));
    // 0x35b290: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35B290u;
    {
        const bool branch_taken_0x35b290 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x35B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B290u;
        // 0x35b294: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b290) {
            ctx->pc = 0x35B2A8u;
            goto label_35b2a8;
        }
    }
    ctx->pc = 0x35B298u;
    // 0x35b298: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35B298u;
    SET_GPR_U32(ctx, 31, 0x35B2A0u);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35B298u, 0x35B2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B2A0u;
label_35b2a0:
    // 0x35b2a0: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x35B2A0u;
    {
        const bool branch_taken_0x35b2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B2A0u;
        // 0x35b2a4: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b2a0) {
            ctx->pc = 0x35B258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b258;
        }
    }
    ctx->pc = 0x35B2A8u;
label_35b2a8:
    // 0x35b2a8: 0xc0d6d26  jal         func_35B498
    ctx->pc = 0x35B2A8u;
    SET_GPR_U32(ctx, 31, 0x35B2B0u);
    ctx->pc = 0x35B498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B498u, 0x35B2A8u, 0x35B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B2B0u;
label_35b2b0:
    // 0x35b2b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35b2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b2b4: 0x1443fffc  bne         $v0, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x35B2B4u;
    {
        const bool branch_taken_0x35b2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B2B4u;
        // 0x35b2b8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b2b4) {
            ctx->pc = 0x35B2A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b2a8;
        }
    }
    ctx->pc = 0x35B2BCu;
    // 0x35b2bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35b2bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b2c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35b2c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b2c4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x35b2c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35b2c8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x35b2c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35b2cc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x35b2ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35b2d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35b2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35b2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x35B2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B2D4u;
        // 0x35b2d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B2DCu;
    // 0x35b2dc: 0x0  nop
    ctx->pc = 0x35b2dcu;
    // NOP
    ctx->pc = 0x35b2e0u;
}
