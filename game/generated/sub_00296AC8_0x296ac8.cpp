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

// Function: sub_00296AC8
// Address: 0x296ac8 - 0x296b70
void sub_00296AC8_0x296ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296AC8_0x296ac8");
#endif

    switch (ctx->pc) {
        case 0x296af4u: goto label_296af4;
        case 0x296b58u: goto label_296b58;
        default: break;
    }

    ctx->pc = 0x296ac8u;

    // 0x296ac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296acc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296ad0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296ad4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x296ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x296ad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296adc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x296adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x296ae0: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x296ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x296ae4: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x296ae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x296ae8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x296ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x296aec: 0xc0a9e26  jal         func_2A7898
    ctx->pc = 0x296AECu;
    SET_GPR_U32(ctx, 31, 0x296AF4u);
    ctx->pc = 0x296AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296AECu;
    // 0x296af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7898u, 0x296AECu, 0x296AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296AF4u;
label_296af4:
    // 0x296af4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x296af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x296af8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x296af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x296afc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x296afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x296b00: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x296b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x296b04: 0xe62000b8  swc1        $f0, 0xB8($s1)
    ctx->pc = 0x296b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
    // 0x296b08: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x296b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x296b0c: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x296b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x296b10: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x296b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x296b14: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x296b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x296b18: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x296b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x296b1c: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x296b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x296b20: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x296b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x296b24: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x296b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x296b28: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x296b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x296b2c: 0xae000138  sw          $zero, 0x138($s0)
    ctx->pc = 0x296b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 0));
    // 0x296b30: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x296b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
    // 0x296b34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x296B34u;
    {
        const bool branch_taken_0x296b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B34u;
        // 0x296b38: 0xae000140  sw          $zero, 0x140($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296b34) {
            ctx->pc = 0x296B58u;
            goto label_296b58;
        }
    }
    ctx->pc = 0x296B3Cu;
    // 0x296b3c: 0x0  nop
    ctx->pc = 0x296b3cu;
    // NOP
    // 0x296b40: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x296b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x296b44: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x296b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x296b48: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x296b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x296b4c: 0x2484ff2c  addiu       $a0, $a0, -0xD4
    ctx->pc = 0x296b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967084));
    // 0x296b50: 0xc048b90  jal         func_122E40
    ctx->pc = 0x296B50u;
    SET_GPR_U32(ctx, 31, 0x296B58u);
    ctx->pc = 0x296B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296B50u;
    // 0x296b54: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x296B50u, 0x296B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296B58u;
label_296b58:
    // 0x296b58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296b5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x296b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296b64: 0x3e00008  jr          $ra
    ctx->pc = 0x296B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296B64u;
        // 0x296b68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296B6Cu;
    // 0x296b6c: 0x0  nop
    ctx->pc = 0x296b6cu;
    // NOP
    ctx->pc = 0x296b70u;
}
