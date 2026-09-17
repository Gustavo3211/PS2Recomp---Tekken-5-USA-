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

// Function: sub_0021FC80
// Address: 0x21fc80 - 0x21fe38
void sub_0021FC80_0x21fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FC80_0x21fc80");
#endif

    switch (ctx->pc) {
        case 0x21fcd0u: goto label_21fcd0;
        case 0x21fd04u: goto label_21fd04;
        case 0x21fd0cu: goto label_21fd0c;
        case 0x21fd14u: goto label_21fd14;
        case 0x21fd24u: goto label_21fd24;
        case 0x21fd40u: goto label_21fd40;
        case 0x21fd6cu: goto label_21fd6c;
        case 0x21fd98u: goto label_21fd98;
        case 0x21fda0u: goto label_21fda0;
        case 0x21fdb8u: goto label_21fdb8;
        case 0x21fdd0u: goto label_21fdd0;
        case 0x21fdd8u: goto label_21fdd8;
        default: break;
    }

    ctx->pc = 0x21fc80u;

    // 0x21fc80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x21fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21fc84: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x21fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x21fc88: 0x24424520  addiu       $v0, $v0, 0x4520
    ctx->pc = 0x21fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17696));
    // 0x21fc8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21fc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21fc90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21fc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21fc94: 0x3c120005  lui         $s2, 0x5
    ctx->pc = 0x21fc94u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)5 << 16));
    // 0x21fc98: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x21fc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x21fc9c: 0x36527030  ori         $s2, $s2, 0x7030
    ctx->pc = 0x21fc9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)28720);
    // 0x21fca0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x21fca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x21fca4: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x21fca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x21fca8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21fcac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21fcacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcb0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21fcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21fcb4: 0x24534910  addiu       $s3, $v0, 0x4910
    ctx->pc = 0x21fcb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 18704));
    // 0x21fcb8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21fcbc: 0x24544914  addiu       $s4, $v0, 0x4914
    ctx->pc = 0x21fcbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 18708));
    // 0x21fcc0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x21fcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x21fcc4: 0x2455491c  addiu       $s5, $v0, 0x491C
    ctx->pc = 0x21fcc4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 18716));
    // 0x21fcc8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x21fcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x21fccc: 0x24574918  addiu       $s7, $v0, 0x4918
    ctx->pc = 0x21fcccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 18712));
label_21fcd0:
    // 0x21fcd0: 0x118180  sll         $s0, $s1, 6
    ctx->pc = 0x21fcd0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x21fcd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21fcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fcd8: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x21fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x21fcdc: 0x2152821  addu        $a1, $s0, $s5
    ctx->pc = 0x21fcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x21fce0: 0x2e23021  addu        $a2, $s7, $v0
    ctx->pc = 0x21fce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x21fce4: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x21fce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x21fce8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x21fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x21fcec: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x21fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x21fcf0: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x21fcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x21fcf4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21fcf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x21fcf8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x21fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x21fcfc: 0xc086428  jal         func_2190A0
    ctx->pc = 0x21FCFCu;
    SET_GPR_U32(ctx, 31, 0x21FD04u);
    ctx->pc = 0x21FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCFCu;
    // 0x21fd00: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2190A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2190A0u, 0x21FCFCu, 0x21FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD04u;
label_21fd04:
    // 0x21fd04: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x21FD04u;
    SET_GPR_U32(ctx, 31, 0x21FD0Cu);
    ctx->pc = 0x21FD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD04u;
    // 0x21fd08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x21FD04u, 0x21FD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD0Cu;
label_21fd0c:
    // 0x21fd0c: 0xc08e498  jal         func_239260
    ctx->pc = 0x21FD0Cu;
    SET_GPR_U32(ctx, 31, 0x21FD14u);
    ctx->pc = 0x21FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD0Cu;
    // 0x21fd10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239260u, 0x21FD0Cu, 0x21FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD14u;
label_21fd14:
    // 0x21fd14: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x21fd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x21fd18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21fd18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd1c: 0xc04a58e  jal         func_129638
    ctx->pc = 0x21FD1Cu;
    SET_GPR_U32(ctx, 31, 0x21FD24u);
    ctx->pc = 0x21FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD1Cu;
    // 0x21fd20: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x21FD1Cu, 0x21FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD24u;
label_21fd24:
    // 0x21fd24: 0x2a22001e  slti        $v0, $s1, 0x1E
    ctx->pc = 0x21fd24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x21fd28: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x21fd28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x21fd2c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x21FD2Cu;
    {
        const bool branch_taken_0x21fd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FD2Cu;
        // 0x21fd30: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fd2c) {
            ctx->pc = 0x21FCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fcd0;
        }
    }
    ctx->pc = 0x21FD34u;
    // 0x21fd34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21fd34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd38: 0x24160014  addiu       $s6, $zero, 0x14
    ctx->pc = 0x21fd38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21fd3c: 0x241e0007  addiu       $fp, $zero, 0x7
    ctx->pc = 0x21fd3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_21fd40:
    // 0x21fd40: 0x256001a  div         $zero, $s2, $s6
    ctx->pc = 0x21fd40u;
    { int32_t divisor = GPR_S32(ctx, 22);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21fd44: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x21fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x21fd48: 0x24636e58  addiu       $v1, $v1, 0x6E58
    ctx->pc = 0x21fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28248));
    // 0x21fd4c: 0x128980  sll         $s1, $s2, 6
    ctx->pc = 0x21fd4cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x21fd50: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21fd50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x21fd54: 0x1010  mfhi        $v0
    ctx->pc = 0x21fd54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x21fd58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21fd5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21fd60: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21fd60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21fd64: 0xc086418  jal         func_219060
    ctx->pc = 0x21FD64u;
    SET_GPR_U32(ctx, 31, 0x21FD6Cu);
    ctx->pc = 0x21FD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD64u;
    // 0x21fd68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219060u, 0x21FD64u, 0x21FD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD6Cu;
label_21fd6c:
    // 0x21fd6c: 0x262307b0  addiu       $v1, $s1, 0x7B0
    ctx->pc = 0x21fd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1968));
    // 0x21fd70: 0x2e33821  addu        $a3, $s7, $v1
    ctx->pc = 0x21fd70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x21fd74: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x21fd74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x21fd78: 0x2352821  addu        $a1, $s1, $s5
    ctx->pc = 0x21fd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x21fd7c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x21fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x21fd80: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x21fd80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x21fd84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fd88: 0xaca007a0  sw          $zero, 0x7A0($a1)
    ctx->pc = 0x21fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1952), GPR_U32(ctx, 0));
    // 0x21fd8c: 0xac7e0000  sw          $fp, 0x0($v1)
    ctx->pc = 0x21fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 30));
    // 0x21fd90: 0xc0863f8  jal         func_218FE0
    ctx->pc = 0x21FD90u;
    SET_GPR_U32(ctx, 31, 0x21FD98u);
    ctx->pc = 0x21FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD90u;
    // 0x21fd94: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218FE0u, 0x21FD90u, 0x21FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FD98u;
label_21fd98:
    // 0x21fd98: 0xc08e498  jal         func_239260
    ctx->pc = 0x21FD98u;
    SET_GPR_U32(ctx, 31, 0x21FDA0u);
    ctx->pc = 0x21FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FD98u;
    // 0x21fd9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239260u, 0x21FD98u, 0x21FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDA0u;
label_21fda0:
    // 0x21fda0: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x21fda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x21fda4: 0x24840780  addiu       $a0, $a0, 0x780
    ctx->pc = 0x21fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1920));
    // 0x21fda8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21fda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fdac: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x21fdacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21fdb0: 0xc04a58e  jal         func_129638
    ctx->pc = 0x21FDB0u;
    SET_GPR_U32(ctx, 31, 0x21FDB8u);
    ctx->pc = 0x21FDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FDB0u;
    // 0x21fdb4: 0x2338821  addu        $s1, $s1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129638u, 0x21FDB0u, 0x21FDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FDB8u;
label_21fdb8:
    // 0x21fdb8: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x21fdb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x21fdbc: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x21FDBCu;
    {
        const bool branch_taken_0x21fdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDBCu;
        // 0x21fdc0: 0xa2200794  sb          $zero, 0x794($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1940), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdbc) {
            ctx->pc = 0x21FD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fd40;
        }
    }
    ctx->pc = 0x21FDC4u;
    // 0x21fdc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21fdc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fdc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21fdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fdcc: 0x0  nop
    ctx->pc = 0x21fdccu;
    // NOP
label_21fdd0:
    // 0x21fdd0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x21fdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x21fdd4: 0x0  nop
    ctx->pc = 0x21fdd4u;
    // NOP
label_21fdd8:
    // 0x21fdd8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x21fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x21fddc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21fddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x21fde0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21fde4: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x21fde4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x21fde8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x21fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x21fdec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x21FDECu;
    {
        const bool branch_taken_0x21fdec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FDECu;
        // 0x21fdf0: 0xac400c80  sw          $zero, 0xC80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fdec) {
            ctx->pc = 0x21FDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fdd8;
        }
    }
    ctx->pc = 0x21FDF4u;
    // 0x21fdf4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x21fdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x21fdf8: 0x28c2001e  slti        $v0, $a2, 0x1E
    ctx->pc = 0x21fdf8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x21fdfc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x21FDFCu;
    {
        const bool branch_taken_0x21fdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21fdfc) {
            ctx->pc = 0x21FE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FDFCu;
            // 0x21fe00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21FDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21fdd0;
        }
    }
    ctx->pc = 0x21FE04u;
    // 0x21fe04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21fe04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21fe08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21fe08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21fe0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21fe0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fe10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21fe10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21fe14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21fe14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fe18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x21fe18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21fe1c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x21fe1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21fe20: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x21fe20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21fe24: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x21fe24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21fe28: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x21fe28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21fe2c: 0x3e00008  jr          $ra
    ctx->pc = 0x21FE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FE2Cu;
        // 0x21fe30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21FE34u;
    // 0x21fe34: 0x0  nop
    ctx->pc = 0x21fe34u;
    // NOP
    ctx->pc = 0x21fe38u;
}
