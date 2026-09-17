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

// Function: sub_002481B8
// Address: 0x2481b8 - 0x248318
void sub_002481B8_0x2481b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002481B8_0x2481b8");
#endif

    switch (ctx->pc) {
        case 0x248218u: goto label_248218;
        case 0x248244u: goto label_248244;
        case 0x248258u: goto label_248258;
        case 0x248260u: goto label_248260;
        case 0x248270u: goto label_248270;
        case 0x24827cu: goto label_24827c;
        case 0x248294u: goto label_248294;
        case 0x2482a8u: goto label_2482a8;
        case 0x2482c0u: goto label_2482c0;
        case 0x2482f0u: goto label_2482f0;
        default: break;
    }

    ctx->pc = 0x2481b8u;

    // 0x2481b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2481b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2481bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2481bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2481c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2481c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2481c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2481c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2481c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2481c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2481cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2481ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2481d0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2481d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2481d4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2481d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2481d8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2481d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2481dc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2481dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2481e0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2481e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2481e4: 0x2442d870  addiu       $v0, $v0, -0x2790
    ctx->pc = 0x2481e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957168));
    // 0x2481e8: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2481e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2481ec: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2481ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2481f0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2481f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2481f4: 0x24636fe0  addiu       $v1, $v1, 0x6FE0
    ctx->pc = 0x2481f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28640));
    // 0x2481f8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2481f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x2481fc: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2481fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x166FF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x166FF8u, _value); } while (0);
    // 0x248200: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248204: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x248204u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x166FECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x166FECu, _value); } while (0);
    // 0x248208: 0x8c968880  lw          $s6, -0x7780($a0)
    ctx->pc = 0x248208u;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x3A8880u));
    // 0x24820c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x24820cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x166FF0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x166FF0u, _value); } while (0);
    // 0x248210: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x248210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x248214: 0x0  nop
    ctx->pc = 0x248214u;
    // NOP
label_248218:
    // 0x248218: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x248218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x24821c: 0x0  nop
    ctx->pc = 0x24821cu;
    // NOP
    // 0x248220: 0x0  nop
    ctx->pc = 0x248220u;
    // NOP
    // 0x248224: 0x0  nop
    ctx->pc = 0x248224u;
    // NOP
    // 0x248228: 0x0  nop
    ctx->pc = 0x248228u;
    // NOP
    // 0x24822c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24822Cu;
    {
        const bool branch_taken_0x24822c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24822c) {
            ctx->pc = 0x248230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24822Cu;
            // 0x248230: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248218;
        }
    }
    ctx->pc = 0x248234u;
    // 0x248234: 0xae200090  sw          $zero, 0x90($s1)
    ctx->pc = 0x248234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x248238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24823c: 0xc0920c6  jal         func_248318
    ctx->pc = 0x24823Cu;
    SET_GPR_U32(ctx, 31, 0x248244u);
    ctx->pc = 0x248240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24823Cu;
    // 0x248240: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248318u, 0x24823Cu, 0x248244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248244u;
label_248244:
    // 0x248244: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x248244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x248248: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x248248u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24824c: 0x24421290  addiu       $v0, $v0, 0x1290
    ctx->pc = 0x24824cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4752));
    // 0x248250: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x248250u;
    {
        const bool branch_taken_0x248250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248250u;
        // 0x248254: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248250) {
            ctx->pc = 0x2482B8u;
            goto label_2482b8;
        }
    }
    ctx->pc = 0x248258u;
label_248258:
    // 0x248258: 0xc091e3a  jal         func_2478E8
    ctx->pc = 0x248258u;
    SET_GPR_U32(ctx, 31, 0x248260u);
    ctx->pc = 0x24825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248258u;
    // 0x24825c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2478E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2478E8u, 0x248258u, 0x248260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248260u;
label_248260:
    // 0x248260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248264: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x248264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248268: 0xc0920dc  jal         func_248370
    ctx->pc = 0x248268u;
    SET_GPR_U32(ctx, 31, 0x248270u);
    ctx->pc = 0x24826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248268u;
    // 0x24826c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248370u, 0x248268u, 0x248270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248270u;
label_248270:
    // 0x248270: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x248270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248274: 0xc0b7aaa  jal         func_2DEAA8
    ctx->pc = 0x248274u;
    SET_GPR_U32(ctx, 31, 0x24827Cu);
    ctx->pc = 0x248278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248274u;
    // 0x248278: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEAA8u, 0x248274u, 0x24827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24827Cu;
label_24827c:
    // 0x24827c: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x24827cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x248280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x248280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248284: 0x26620050  addiu       $v0, $s3, 0x50
    ctx->pc = 0x248284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x248288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24828c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x24828Cu;
    SET_GPR_U32(ctx, 31, 0x248294u);
    ctx->pc = 0x248290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24828Cu;
    // 0x248290: 0x2229021  addu        $s2, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x24828Cu, 0x248294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248294u;
label_248294:
    // 0x248294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x248294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248298: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x248298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24829c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24829cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2482a0: 0xc091e5c  jal         func_247970
    ctx->pc = 0x2482A0u;
    SET_GPR_U32(ctx, 31, 0x2482A8u);
    ctx->pc = 0x2482A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2482A0u;
    // 0x2482a4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247970u, 0x2482A0u, 0x2482A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482A8u;
label_2482a8:
    // 0x2482a8: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2482a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2482ac: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x2482acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2482b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2482b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2482b4: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x2482b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
label_2482b8:
    // 0x2482b8: 0xc091e2c  jal         func_2478B0
    ctx->pc = 0x2482B8u;
    SET_GPR_U32(ctx, 31, 0x2482C0u);
    ctx->pc = 0x2482BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2482B8u;
    // 0x2482bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2478B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2478B0u, 0x2482B8u, 0x2482C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482C0u;
label_2482c0:
    // 0x2482c0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2482c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2482c4: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2482C4u;
    {
        const bool branch_taken_0x2482c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2482c4) {
            ctx->pc = 0x2482C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2482C4u;
            // 0x2482c8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248258;
        }
    }
    ctx->pc = 0x2482CCu;
    // 0x2482cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2482CCu;
    {
        const bool branch_taken_0x2482cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2482D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482CCu;
        // 0x2482d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2482cc) {
            ctx->pc = 0x2482F0u;
            goto label_2482f0;
        }
    }
    ctx->pc = 0x2482D4u;
    // 0x2482d4: 0x0  nop
    ctx->pc = 0x2482d4u;
    // NOP
    // 0x2482d8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2482d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2482dc: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2482dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2482e0: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2482e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2482e4: 0x2484fc6c  addiu       $a0, $a0, -0x394
    ctx->pc = 0x2482e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966380));
    // 0x2482e8: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2482E8u;
    SET_GPR_U32(ctx, 31, 0x2482F0u);
    ctx->pc = 0x2482ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2482E8u;
    // 0x2482ec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2482E8u, 0x2482F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482F0u;
label_2482f0:
    // 0x2482f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2482f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2482f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2482f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2482f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2482f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2482fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2482fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248300: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x248300u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x248304: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x248304u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x248308: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x248308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x24830c: 0x3e00008  jr          $ra
    ctx->pc = 0x24830Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24830Cu;
        // 0x248310: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24830Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248314u;
    // 0x248314: 0x0  nop
    ctx->pc = 0x248314u;
    // NOP
    ctx->pc = 0x248318u;
}
