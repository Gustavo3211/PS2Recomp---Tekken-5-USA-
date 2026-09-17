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

// Function: sub_00117608
// Address: 0x117608 - 0x117788
void sub_00117608_0x117608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117608_0x117608");
#endif

    switch (ctx->pc) {
        case 0x117618u: goto label_117618;
        case 0x117678u: goto label_117678;
        case 0x1176fcu: goto label_1176fc;
        case 0x117718u: goto label_117718;
        case 0x117768u: goto label_117768;
        default: break;
    }

    ctx->pc = 0x117608u;

    // 0x117608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11760c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11760cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117610: 0xc045d64  jal         func_117590
    ctx->pc = 0x117610u;
    SET_GPR_U32(ctx, 31, 0x117618u);
    ctx->pc = 0x117590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117590u, 0x117610u, 0x117618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117618u;
label_117618:
    // 0x117618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11761c: 0x3e00008  jr          $ra
    ctx->pc = 0x11761Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11761Cu;
        // 0x117620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11761Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117624u;
    // 0x117624: 0x0  nop
    ctx->pc = 0x117624u;
    // NOP
    // 0x117628: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x117628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11762c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11762cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117630: 0x8c4311ac  lw          $v1, 0x11AC($v0)
    ctx->pc = 0x117630u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1311ACu));
    // 0x117634: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x117634u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117638: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11763c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11763Cu;
    {
        const bool branch_taken_0x11763c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x117640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11763Cu;
        // 0x117640: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11763c) {
            ctx->pc = 0x11764Cu;
            goto label_11764c;
        }
    }
    ctx->pc = 0x117644u;
    // 0x117644: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x117644u;
    {
        const bool branch_taken_0x117644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117644u;
        // 0x117648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117644) {
            ctx->pc = 0x117708u;
            goto label_117708;
        }
    }
    ctx->pc = 0x11764Cu;
label_11764c:
    // 0x11764c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x11764cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x117650: 0x3c07001f  lui         $a3, 0x1F
    ctx->pc = 0x117650u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)31 << 16));
    // 0x117654: 0x24e3bc00  addiu       $v1, $a3, -0x4400
    ctx->pc = 0x117654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949888));
    // 0x117658: 0xa0620004  sb          $v0, 0x4($v1)
    ctx->pc = 0x117658u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1EBC04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x1EBC04u, _value); } while (0);
    // 0x11765c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x11765cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x117660: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x117660u;
    {
        const bool branch_taken_0x117660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117660u;
        // 0x117664: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117660) {
            ctx->pc = 0x1176A8u;
            goto label_1176a8;
        }
    }
    ctx->pc = 0x117668u;
    // 0x117668: 0x3c09001f  lui         $t1, 0x1F
    ctx->pc = 0x117668u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)31 << 16));
    // 0x11766c: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x11766cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x117670: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x117670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x117674: 0x0  nop
    ctx->pc = 0x117674u;
    // NOP
label_117678:
    // 0x117678: 0x290200fc  slti        $v0, $t0, 0xFC
    ctx->pc = 0x117678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)252) ? 1 : 0);
    // 0x11767c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11767Cu;
    {
        const bool branch_taken_0x11767c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11767Cu;
        // 0x117680: 0xc81021  addu        $v0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11767c) {
            ctx->pc = 0x1176B0u;
            goto label_1176b0;
        }
    }
    ctx->pc = 0x117684u;
    // 0x117684: 0x24e3bc00  addiu       $v1, $a3, -0x4400
    ctx->pc = 0x117684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949888));
    // 0x117688: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x117688u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11768c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x11768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x117690: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x117690u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x117694: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x117694u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x117698: 0x5480fff7  bnel        $a0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x117698u;
    {
        const bool branch_taken_0x117698 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x117698) {
            ctx->pc = 0x11769Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117698u;
            // 0x11769c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117678;
        }
    }
    ctx->pc = 0x1176A0u;
    // 0x1176a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1176A0u;
    {
        const bool branch_taken_0x1176a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1176A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176A0u;
        // 0x1176a4: 0x240200fc  addiu       $v0, $zero, 0xFC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1176a0) {
            ctx->pc = 0x1176B4u;
            goto label_1176b4;
        }
    }
    ctx->pc = 0x1176A8u;
label_1176a8:
    // 0x1176a8: 0x3c09001f  lui         $t1, 0x1F
    ctx->pc = 0x1176a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)31 << 16));
    // 0x1176ac: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x1176acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
label_1176b0:
    // 0x1176b0: 0x240200fc  addiu       $v0, $zero, 0xFC
    ctx->pc = 0x1176b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
label_1176b4:
    // 0x1176b4: 0x55020005  bnel        $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1176B4u;
    {
        const bool branch_taken_0x1176b4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1176b4) {
            ctx->pc = 0x1176B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1176B4u;
            // 0x1176b8: 0xace5bc00  sw          $a1, -0x4400($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 4294949888), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1176CCu;
            goto label_1176cc;
        }
    }
    ctx->pc = 0x1176BCu;
    // 0x1176bc: 0x24e2bc00  addiu       $v0, $a3, -0x4400
    ctx->pc = 0x1176bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949888));
    // 0x1176c0: 0x240800fb  addiu       $t0, $zero, 0xFB
    ctx->pc = 0x1176c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x1176c4: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1176c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x1176c8: 0xace5bc00  sw          $a1, -0x4400($a3)
    ctx->pc = 0x1176c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294949888), GPR_U32(ctx, 5));
label_1176cc:
    // 0x1176cc: 0x24e2bc00  addiu       $v0, $a3, -0x4400
    ctx->pc = 0x1176ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949888));
    // 0x1176d0: 0x2524bb40  addiu       $a0, $t1, -0x44C0
    ctx->pc = 0x1176d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294949696));
    // 0x1176d4: 0xa04000ff  sb          $zero, 0xFF($v0)
    ctx->pc = 0x1176d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x1176d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1176d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176dc: 0x25080005  addiu       $t0, $t0, 0x5
    ctx->pc = 0x1176dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5));
    // 0x1176e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1176e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1176e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1176e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1176e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1176e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1176ec: 0x2609bb80  addiu       $t1, $s0, -0x4480
    ctx->pc = 0x1176ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949760));
    // 0x1176f0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1176f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1176f4: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x1176F4u;
    SET_GPR_U32(ctx, 31, 0x1176FCu);
    ctx->pc = 0x1176F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1176F4u;
    // 0x1176f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x1176F4u, 0x1176FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1176FCu;
label_1176fc:
    // 0x1176fc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1176FCu;
    {
        const bool branch_taken_0x1176fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x117700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1176FCu;
        // 0x117700: 0x8e02bb80  lw          $v0, -0x4480($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1176fc) {
            ctx->pc = 0x117708u;
            goto label_117708;
        }
    }
    ctx->pc = 0x117704u;
    // 0x117704: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x117704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_117708:
    // 0x117708: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11770c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11770cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117710: 0x3e00008  jr          $ra
    ctx->pc = 0x117710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117710u;
        // 0x117714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117718u;
label_117718:
    // 0x117718: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x117718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11771c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11771cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117720: 0x8c4311ac  lw          $v1, 0x11AC($v0)
    ctx->pc = 0x117720u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1311ACu));
    // 0x117724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117728: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x117728u;
    {
        const bool branch_taken_0x117728 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117728u;
        // 0x11772c: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117728) {
            ctx->pc = 0x117738u;
            goto label_117738;
        }
    }
    ctx->pc = 0x117730u;
    // 0x117730: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x117730u;
    {
        const bool branch_taken_0x117730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117730u;
        // 0x117734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117730) {
            ctx->pc = 0x117778u;
            goto label_117778;
        }
    }
    ctx->pc = 0x117738u;
label_117738:
    // 0x117738: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x117738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x11773c: 0x3c10001f  lui         $s0, 0x1F
    ctx->pc = 0x11773cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)31 << 16));
    // 0x117740: 0x2484bb40  addiu       $a0, $a0, -0x44C0
    ctx->pc = 0x117740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949696));
    // 0x117744: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x117744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x117748: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x117748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11774c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11774cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117750: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x117750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117754: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x117754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117758: 0x2609bb80  addiu       $t1, $s0, -0x4480
    ctx->pc = 0x117758u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949760));
    // 0x11775c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11775cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x117760: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x117760u;
    SET_GPR_U32(ctx, 31, 0x117768u);
    ctx->pc = 0x117764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117760u;
    // 0x117764: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x117760u, 0x117768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117768u;
label_117768:
    // 0x117768: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117768u;
    {
        const bool branch_taken_0x117768 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x117768) {
            ctx->pc = 0x11776Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117768u;
            // 0x11776c: 0x8e02bb80  lw          $v0, -0x4480($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949760)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117778u;
            goto label_117778;
        }
    }
    ctx->pc = 0x117770u;
    // 0x117770: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x117770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x117774: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x117774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_117778:
    // 0x117778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x117778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11777c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11777cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117780: 0x3e00008  jr          $ra
    ctx->pc = 0x117780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117780u;
        // 0x117784: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117788u;
}
