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

// Function: sub_00364268
// Address: 0x364268 - 0x3643f8
void sub_00364268_0x364268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364268_0x364268");
#endif

    switch (ctx->pc) {
        case 0x3642a0u: goto label_3642a0;
        case 0x3642d8u: goto label_3642d8;
        case 0x3642dcu: goto label_3642dc;
        case 0x3642e0u: goto label_3642e0;
        case 0x364380u: goto label_364380;
        default: break;
    }

    ctx->pc = 0x364268u;

    // 0x364268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x364268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36426c: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x36426cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x364270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x364270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x364274: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x364274u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364278: 0x4c0005a  bltz        $a2, . + 4 + (0x5A << 2)
    ctx->pc = 0x364278u;
    {
        const bool branch_taken_0x364278 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x36427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364278u;
        // 0x36427c: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364278) {
            ctx->pc = 0x3643E4u;
            goto label_3643e4;
        }
    }
    ctx->pc = 0x364280u;
    // 0x364280: 0x90a90000  lbu         $t1, 0x0($a1)
    ctx->pc = 0x364280u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x364284: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x364284u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x364288: 0x240d0020  addiu       $t5, $zero, 0x20
    ctx->pc = 0x364288u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36428c: 0x2418002c  addiu       $t8, $zero, 0x2C
    ctx->pc = 0x36428cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x364290: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x364290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x364294: 0x2419000d  addiu       $t9, $zero, 0xD
    ctx->pc = 0x364294u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x364298: 0x2411002f  addiu       $s1, $zero, 0x2F
    ctx->pc = 0x364298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x36429c: 0x91600  sll         $v0, $t1, 24
    ctx->pc = 0x36429cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
label_3642a0:
    // 0x3642a0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3642a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3642a4: 0x504a000d  beql        $v0, $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x3642A4u;
    {
        const bool branch_taken_0x3642a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x3642a4) {
            ctx->pc = 0x3642A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3642A4u;
            // 0x3642a8: 0x91600  sll         $v0, $t1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3642DCu;
            goto label_3642dc;
        }
    }
    ctx->pc = 0x3642ACu;
    // 0x3642ac: 0x504d000b  beql        $v0, $t5, . + 4 + (0xB << 2)
    ctx->pc = 0x3642ACu;
    {
        const bool branch_taken_0x3642ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        if (branch_taken_0x3642ac) {
            ctx->pc = 0x3642B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3642ACu;
            // 0x3642b0: 0x91600  sll         $v0, $t1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3642DCu;
            goto label_3642dc;
        }
    }
    ctx->pc = 0x3642B4u;
    // 0x3642b4: 0x50580009  beql        $v0, $t8, . + 4 + (0x9 << 2)
    ctx->pc = 0x3642B4u;
    {
        const bool branch_taken_0x3642b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 24));
        if (branch_taken_0x3642b4) {
            ctx->pc = 0x3642B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3642B4u;
            // 0x3642b8: 0x91600  sll         $v0, $t1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3642DCu;
            goto label_3642dc;
        }
    }
    ctx->pc = 0x3642BCu;
    // 0x3642bc: 0x5050004a  beql        $v0, $s0, . + 4 + (0x4A << 2)
    ctx->pc = 0x3642BCu;
    {
        const bool branch_taken_0x3642bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x3642bc) {
            ctx->pc = 0x3642C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3642BCu;
            // 0x3642c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3643E8u;
            goto label_3643e8;
        }
    }
    ctx->pc = 0x3642C4u;
    // 0x3642c4: 0x50590005  beql        $v0, $t9, . + 4 + (0x5 << 2)
    ctx->pc = 0x3642C4u;
    {
        const bool branch_taken_0x3642c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 25));
        if (branch_taken_0x3642c4) {
            ctx->pc = 0x3642C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3642C4u;
            // 0x3642c8: 0x91600  sll         $v0, $t1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3642DCu;
            goto label_3642dc;
        }
    }
    ctx->pc = 0x3642CCu;
    // 0x3642cc: 0x1451001b  bne         $v0, $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3642CCu;
    {
        const bool branch_taken_0x3642cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x3642D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3642CCu;
        // 0x3642d0: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3642cc) {
            ctx->pc = 0x36433Cu;
            goto label_36433c;
        }
    }
    ctx->pc = 0x3642D4u;
    // 0x3642d4: 0x0  nop
    ctx->pc = 0x3642d4u;
    // NOP
label_3642d8:
    // 0x3642d8: 0x91600  sll         $v0, $t1, 24
    ctx->pc = 0x3642d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
label_3642dc:
    // 0x3642dc: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x3642dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3642e0:
    // 0x3642e0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3642e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3642e4: 0x50480040  beql        $v0, $t0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3642E4u;
    {
        const bool branch_taken_0x3642e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x3642e4) {
            ctx->pc = 0x3642E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3642E4u;
            // 0x3642e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3643E8u;
            goto label_3643e8;
        }
    }
    ctx->pc = 0x3642ECu;
    // 0x3642ec: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x3642ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3642f0: 0x5044003d  beql        $v0, $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3642F0u;
    {
        const bool branch_taken_0x3642f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x3642f0) {
            ctx->pc = 0x3642F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3642F0u;
            // 0x3642f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3643E8u;
            goto label_3643e8;
        }
    }
    ctx->pc = 0x3642F8u;
    // 0x3642f8: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x3642f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3642fc: 0x1043003a  beq         $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x3642FCu;
    {
        const bool branch_taken_0x3642fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x364300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3642FCu;
        // 0x364300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3642fc) {
            ctx->pc = 0x3643E8u;
            goto label_3643e8;
        }
    }
    ctx->pc = 0x364304u;
    // 0x364304: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x364304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x364308: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x364308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36430c: 0x104afff2  beq         $v0, $t2, . + 4 + (-0xE << 2)
    ctx->pc = 0x36430Cu;
    {
        const bool branch_taken_0x36430c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x364310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36430Cu;
        // 0x364310: 0x90a90000  lbu         $t1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36430c) {
            ctx->pc = 0x3642D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3642d8;
        }
    }
    ctx->pc = 0x364314u;
    // 0x364314: 0x504dfff2  beql        $v0, $t5, . + 4 + (-0xE << 2)
    ctx->pc = 0x364314u;
    {
        const bool branch_taken_0x364314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        if (branch_taken_0x364314) {
            ctx->pc = 0x364318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364314u;
            // 0x364318: 0x91600  sll         $v0, $t1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3642E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3642e0;
        }
    }
    ctx->pc = 0x36431Cu;
    // 0x36431c: 0x5058ffef  beql        $v0, $t8, . + 4 + (-0x11 << 2)
    ctx->pc = 0x36431Cu;
    {
        const bool branch_taken_0x36431c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 24));
        if (branch_taken_0x36431c) {
            ctx->pc = 0x364320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36431Cu;
            // 0x364320: 0x91600  sll         $v0, $t1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3642DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3642dc;
        }
    }
    ctx->pc = 0x364324u;
    // 0x364324: 0x50480030  beql        $v0, $t0, . + 4 + (0x30 << 2)
    ctx->pc = 0x364324u;
    {
        const bool branch_taken_0x364324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x364324) {
            ctx->pc = 0x364328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364324u;
            // 0x364328: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3643E8u;
            goto label_3643e8;
        }
    }
    ctx->pc = 0x36432Cu;
    // 0x36432c: 0x5044ffeb  beql        $v0, $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x36432Cu;
    {
        const bool branch_taken_0x36432c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x36432c) {
            ctx->pc = 0x364330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36432Cu;
            // 0x364330: 0x91600  sll         $v0, $t1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3642DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3642dc;
        }
    }
    ctx->pc = 0x364334u;
    // 0x364334: 0x1043ffe8  beq         $v0, $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x364334u;
    {
        const bool branch_taken_0x364334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x364338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364334u;
        // 0x364338: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364334) {
            ctx->pc = 0x3642D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3642d8;
        }
    }
    ctx->pc = 0x36433Cu;
label_36433c:
    // 0x36433c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x36433cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x364340: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x364340u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x364344: 0x104a001f  beq         $v0, $t2, . + 4 + (0x1F << 2)
    ctx->pc = 0x364344u;
    {
        const bool branch_taken_0x364344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x364344) {
            ctx->pc = 0x3643C4u;
            goto label_3643c4;
        }
    }
    ctx->pc = 0x36434Cu;
    // 0x36434c: 0x104d001d  beq         $v0, $t5, . + 4 + (0x1D << 2)
    ctx->pc = 0x36434Cu;
    {
        const bool branch_taken_0x36434c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        if (branch_taken_0x36434c) {
            ctx->pc = 0x3643C4u;
            goto label_3643c4;
        }
    }
    ctx->pc = 0x364354u;
    // 0x364354: 0x1058001b  beq         $v0, $t8, . + 4 + (0x1B << 2)
    ctx->pc = 0x364354u;
    {
        const bool branch_taken_0x364354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 24));
        if (branch_taken_0x364354) {
            ctx->pc = 0x3643C4u;
            goto label_3643c4;
        }
    }
    ctx->pc = 0x36435Cu;
    // 0x36435c: 0x10590019  beq         $v0, $t9, . + 4 + (0x19 << 2)
    ctx->pc = 0x36435Cu;
    {
        const bool branch_taken_0x36435c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 25));
        if (branch_taken_0x36435c) {
            ctx->pc = 0x3643C4u;
            goto label_3643c4;
        }
    }
    ctx->pc = 0x364364u;
    // 0x364364: 0x10500017  beq         $v0, $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x364364u;
    {
        const bool branch_taken_0x364364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x364364) {
            ctx->pc = 0x3643C4u;
            goto label_3643c4;
        }
    }
    ctx->pc = 0x36436Cu;
    // 0x36436c: 0x240f0009  addiu       $t7, $zero, 0x9
    ctx->pc = 0x36436cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x364370: 0x240e0020  addiu       $t6, $zero, 0x20
    ctx->pc = 0x364370u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x364374: 0x240b002c  addiu       $t3, $zero, 0x2C
    ctx->pc = 0x364374u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x364378: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x364378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x36437c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x36437cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_364380:
    // 0x364380: 0x15860003  bne         $t4, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x364380u;
    {
        const bool branch_taken_0x364380 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 6));
        ctx->pc = 0x364384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364380u;
        // 0x364384: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364380) {
            ctx->pc = 0x364390u;
            goto label_364390;
        }
    }
    ctx->pc = 0x364388u;
    // 0x364388: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x364388u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x36438c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x36438cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_364390:
    // 0x364390: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x364390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x364394: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x364394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x364398: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x364398u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x36439c: 0x104f0009  beq         $v0, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x36439Cu;
    {
        const bool branch_taken_0x36439c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x3643A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36439Cu;
        // 0x3643a0: 0x60482d  daddu       $t1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36439c) {
            ctx->pc = 0x3643C4u;
            goto label_3643c4;
        }
    }
    ctx->pc = 0x3643A4u;
    // 0x3643a4: 0x104e0007  beq         $v0, $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x3643A4u;
    {
        const bool branch_taken_0x3643a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        if (branch_taken_0x3643a4) {
            ctx->pc = 0x3643C4u;
            goto label_3643c4;
        }
    }
    ctx->pc = 0x3643ACu;
    // 0x3643ac: 0x104b0005  beq         $v0, $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3643ACu;
    {
        const bool branch_taken_0x3643ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x3643ac) {
            ctx->pc = 0x3643C4u;
            goto label_3643c4;
        }
    }
    ctx->pc = 0x3643B4u;
    // 0x3643b4: 0x10480003  beq         $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3643B4u;
    {
        const bool branch_taken_0x3643b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x3643b4) {
            ctx->pc = 0x3643C4u;
            goto label_3643c4;
        }
    }
    ctx->pc = 0x3643BCu;
    // 0x3643bc: 0x1444fff0  bne         $v0, $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3643BCu;
    {
        const bool branch_taken_0x3643bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3643bc) {
            ctx->pc = 0x364380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364380;
        }
    }
    ctx->pc = 0x3643C4u;
label_3643c4:
    // 0x3643c4: 0x55860004  bnel        $t4, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3643C4u;
    {
        const bool branch_taken_0x3643c4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 6));
        if (branch_taken_0x3643c4) {
            ctx->pc = 0x3643C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3643C4u;
            // 0x3643c8: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3643D8u;
            goto label_3643d8;
        }
    }
    ctx->pc = 0x3643CCu;
    // 0x3643cc: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x3643ccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3643d0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3643D0u;
    {
        const bool branch_taken_0x3643d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3643D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3643D0u;
        // 0x3643d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3643d0) {
            ctx->pc = 0x3643E8u;
            goto label_3643e8;
        }
    }
    ctx->pc = 0x3643D8u;
label_3643d8:
    // 0x3643d8: 0xcc102a  slt         $v0, $a2, $t4
    ctx->pc = 0x3643d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x3643dc: 0x1040ffb0  beqz        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x3643DCu;
    {
        const bool branch_taken_0x3643dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3643E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3643DCu;
        // 0x3643e0: 0x91600  sll         $v0, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3643dc) {
            ctx->pc = 0x3642A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3642a0;
        }
    }
    ctx->pc = 0x3643E4u;
label_3643e4:
    // 0x3643e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3643e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3643e8:
    // 0x3643e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3643e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3643ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3643ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3643f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3643F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3643F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3643F0u;
        // 0x3643f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3643F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3643F8u;
}
