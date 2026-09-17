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

// Function: sub_0028DAE8
// Address: 0x28dae8 - 0x28dcb8
void sub_0028DAE8_0x28dae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DAE8_0x28dae8");
#endif

    switch (ctx->pc) {
        case 0x28db38u: goto label_28db38;
        case 0x28db50u: goto label_28db50;
        case 0x28db68u: goto label_28db68;
        case 0x28db80u: goto label_28db80;
        case 0x28db94u: goto label_28db94;
        case 0x28dba8u: goto label_28dba8;
        case 0x28dbb8u: goto label_28dbb8;
        case 0x28dbc8u: goto label_28dbc8;
        case 0x28dbd8u: goto label_28dbd8;
        case 0x28dbe8u: goto label_28dbe8;
        case 0x28dbfcu: goto label_28dbfc;
        case 0x28dc10u: goto label_28dc10;
        case 0x28dc24u: goto label_28dc24;
        case 0x28dc38u: goto label_28dc38;
        case 0x28dc48u: goto label_28dc48;
        case 0x28dc58u: goto label_28dc58;
        case 0x28dc68u: goto label_28dc68;
        case 0x28dc78u: goto label_28dc78;
        case 0x28dc90u: goto label_28dc90;
        default: break;
    }

    ctx->pc = 0x28dae8u;

    // 0x28dae8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28dae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28daec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28daecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28daf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28daf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28daf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28daf8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28daf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dafc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28dafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28db00: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x28db00u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x28db04: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28db08: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x28db08u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x28db0c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28db0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28db10: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x28db10u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x28db14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28db14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28db18: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x28db18u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x28db1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28db1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28db20: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28db20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28db24: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x28db24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x28db28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28db28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db2c: 0x24a5a0d8  addiu       $a1, $a1, -0x5F28
    ctx->pc = 0x28db2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942936));
    // 0x28db30: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28DB30u;
    SET_GPR_U32(ctx, 31, 0x28DB38u);
    ctx->pc = 0x28DB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB30u;
    // 0x28db34: 0x26b5a0f8  addiu       $s5, $s5, -0x5F08 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28DB30u, 0x28DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB38u;
label_28db38:
    // 0x28db38: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28db38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28db3c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x28db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x28db40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28db40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db44: 0x24a5a0e8  addiu       $a1, $a1, -0x5F18
    ctx->pc = 0x28db44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942952));
    // 0x28db48: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28DB48u;
    SET_GPR_U32(ctx, 31, 0x28DB50u);
    ctx->pc = 0x28DB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB48u;
    // 0x28db4c: 0x2694a108  addiu       $s4, $s4, -0x5EF8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28DB48u, 0x28DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB50u;
label_28db50:
    // 0x28db50: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28db50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x28db54: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x28db54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x28db58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28db58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db5c: 0x24a53d98  addiu       $a1, $a1, 0x3D98
    ctx->pc = 0x28db5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15768));
    // 0x28db60: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28DB60u;
    SET_GPR_U32(ctx, 31, 0x28DB68u);
    ctx->pc = 0x28DB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB60u;
    // 0x28db64: 0x2673a118  addiu       $s3, $s3, -0x5EE8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28DB60u, 0x28DB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB68u;
label_28db68:
    // 0x28db68: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28db68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x28db6c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x28db6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x28db70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28db70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db74: 0x24a53da0  addiu       $a1, $a1, 0x3DA0
    ctx->pc = 0x28db74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15776));
    // 0x28db78: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28DB78u;
    SET_GPR_U32(ctx, 31, 0x28DB80u);
    ctx->pc = 0x28DB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB78u;
    // 0x28db7c: 0x2652a128  addiu       $s2, $s2, -0x5ED8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294943016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28DB78u, 0x28DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB80u;
label_28db80:
    // 0x28db80: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28db80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x28db84: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x28db84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x28db88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28db88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db8c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28DB8Cu;
    SET_GPR_U32(ctx, 31, 0x28DB94u);
    ctx->pc = 0x28DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB8Cu;
    // 0x28db90: 0x24a53da8  addiu       $a1, $a1, 0x3DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28DB8Cu, 0x28DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB94u;
label_28db94:
    // 0x28db94: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x28db94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x28db98: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x28db98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x28db9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28db9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dba0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28DBA0u;
    SET_GPR_U32(ctx, 31, 0x28DBA8u);
    ctx->pc = 0x28DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DBA0u;
    // 0x28dba4: 0x24a53db0  addiu       $a1, $a1, 0x3DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28DBA0u, 0x28DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBA8u;
label_28dba8:
    // 0x28dba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbac: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x28dbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x28dbb0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28DBB0u;
    SET_GPR_U32(ctx, 31, 0x28DBB8u);
    ctx->pc = 0x28DBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DBB0u;
    // 0x28dbb4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28DBB0u, 0x28DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBB8u;
label_28dbb8:
    // 0x28dbb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbbc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x28dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x28dbc0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28DBC0u;
    SET_GPR_U32(ctx, 31, 0x28DBC8u);
    ctx->pc = 0x28DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DBC0u;
    // 0x28dbc4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28DBC0u, 0x28DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBC8u;
label_28dbc8:
    // 0x28dbc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbcc: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x28dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x28dbd0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28DBD0u;
    SET_GPR_U32(ctx, 31, 0x28DBD8u);
    ctx->pc = 0x28DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DBD0u;
    // 0x28dbd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28DBD0u, 0x28DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBD8u;
label_28dbd8:
    // 0x28dbd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbdc: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x28dbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x28dbe0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x28DBE0u;
    SET_GPR_U32(ctx, 31, 0x28DBE8u);
    ctx->pc = 0x28DBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DBE0u;
    // 0x28dbe4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x28DBE0u, 0x28DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBE8u;
label_28dbe8:
    // 0x28dbe8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28dbec: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x28dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x28dbf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dbf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbf4: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28DBF4u;
    SET_GPR_U32(ctx, 31, 0x28DBFCu);
    ctx->pc = 0x28DBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DBF4u;
    // 0x28dbf8: 0x24a5a138  addiu       $a1, $a1, -0x5EC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28DBF4u, 0x28DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBFCu;
label_28dbfc:
    // 0x28dbfc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28dbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28dc00: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x28dc00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x28dc04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc08: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28DC08u;
    SET_GPR_U32(ctx, 31, 0x28DC10u);
    ctx->pc = 0x28DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC08u;
    // 0x28dc0c: 0x24a5a148  addiu       $a1, $a1, -0x5EB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28DC08u, 0x28DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC10u;
label_28dc10:
    // 0x28dc10: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28dc10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28dc14: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x28dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x28dc18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc1c: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28DC1Cu;
    SET_GPR_U32(ctx, 31, 0x28DC24u);
    ctx->pc = 0x28DC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC1Cu;
    // 0x28dc20: 0x24a5a158  addiu       $a1, $a1, -0x5EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28DC1Cu, 0x28DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC24u;
label_28dc24:
    // 0x28dc24: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x28dc24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x28dc28: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x28dc28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x28dc2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc30: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28DC30u;
    SET_GPR_U32(ctx, 31, 0x28DC38u);
    ctx->pc = 0x28DC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC30u;
    // 0x28dc34: 0x24a5a168  addiu       $a1, $a1, -0x5E98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28DC30u, 0x28DC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC38u;
label_28dc38:
    // 0x28dc38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc3c: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x28dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x28dc40: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28DC40u;
    SET_GPR_U32(ctx, 31, 0x28DC48u);
    ctx->pc = 0x28DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC40u;
    // 0x28dc44: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28DC40u, 0x28DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC48u;
label_28dc48:
    // 0x28dc48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc4c: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x28dc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x28dc50: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28DC50u;
    SET_GPR_U32(ctx, 31, 0x28DC58u);
    ctx->pc = 0x28DC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC50u;
    // 0x28dc54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28DC50u, 0x28DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC58u;
label_28dc58:
    // 0x28dc58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc5c: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x28dc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x28dc60: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28DC60u;
    SET_GPR_U32(ctx, 31, 0x28DC68u);
    ctx->pc = 0x28DC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC60u;
    // 0x28dc64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28DC60u, 0x28DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC68u;
label_28dc68:
    // 0x28dc68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28dc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc6c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x28dc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x28dc70: 0xc0a5b78  jal         func_296DE0
    ctx->pc = 0x28DC70u;
    SET_GPR_U32(ctx, 31, 0x28DC78u);
    ctx->pc = 0x28DC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC70u;
    // 0x28dc74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DE0u, 0x28DC70u, 0x28DC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC78u;
label_28dc78:
    // 0x28dc78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28dc7c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x28dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x28dc80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc84: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x28dc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x28dc88: 0xc0a372e  jal         func_28DCB8
    ctx->pc = 0x28DC88u;
    SET_GPR_U32(ctx, 31, 0x28DC90u);
    ctx->pc = 0x28DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC88u;
    // 0x28dc8c: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DCB8u, 0x28DC88u, 0x28DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC90u;
label_28dc90:
    // 0x28dc90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28dc90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28dc94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28dc94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28dc98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28dc98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28dc9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28dc9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28dca0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28dca0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28dca4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28dca4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28dca8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28dca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28dcac: 0x3e00008  jr          $ra
    ctx->pc = 0x28DCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCACu;
        // 0x28dcb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DCB4u;
    // 0x28dcb4: 0x0  nop
    ctx->pc = 0x28dcb4u;
    // NOP
    ctx->pc = 0x28dcb8u;
}
